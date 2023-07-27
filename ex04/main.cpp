/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:50:32 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/27 12:50:34 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void ft_read_data(std::ifstream &file_in, std::string &data) {
	int data_size;

	file_in.seekg(0, std::ios::end);
	data_size = file_in.tellg();
	file_in.seekg(0, std::ios::beg);
	data.resize(data_size);
	file_in.read(&data[0], data_size);
}

void ft_replace(std::string &data, std::string s1, std::string s2) {
	size_t pos = 0;

	while ((pos = data.find(s1, pos)) != std::string::npos) {
		data.erase(pos, s1.length());
		data.insert(pos, s2);
		pos += s2.length();
	}
}

int main(int argc, char **argv) {
	std::string filename;
	std::string s1;
	std::string s2;

	std::string data;

	std::ifstream file_in;
	std::ofstream file_out;

	if (argc != 4) {
		std::cerr << "Error : Wrong argument" << std::endl;
		return (1);
	}

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty()) {
		std::cerr << "Error : s1 is empty" << std::endl;
		return (1);
	}

	file_in.open(filename.c_str());
	if (!file_in.is_open()) {
		std::cerr << "Error : input file open failed " << std::endl;
		return (1);
	}

	file_out.open((std::string(filename) + ".replace").c_str());
	if (!file_out.is_open()) {
		std::cerr << "Error : output file open failed " << std::endl;
		return (1);
	}

	ft_read_data(file_in, data);
	ft_replace(data, s1, s2);
	file_out << data;

	file_in.close();
	file_out.close();
	return (0);
}
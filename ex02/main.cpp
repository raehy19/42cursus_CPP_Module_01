/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:51:52 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/26 17:51:53 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str("HI THIS IS BRAIN");
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "memory address of the string variable : " << &str << std::endl;
	std::cout << "memory address held by stringPTR      : " << stringPTR << std::endl;
	std::cout << "memory address held by stringREF      : " << &stringREF << std::endl;
	std::cout << "value of the string variable          : " << str << std::endl;
	std::cout << "value pointed to by stringPTR         : " << *stringPTR << std::endl;
	std::cout << "value pointed to by stringREF         : " << stringREF << std::endl;

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:00:34 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/27 15:00:35 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
	Harl harl;

	std::cout << "DEBUG :" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;

	std::cout << "INFO :" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;

	std::cout << "WARNING :" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;

	std::cout << "ERROR :" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;

	std::cout << "etc :" << std::endl;
	harl.complain("etc");

	return 0;
}

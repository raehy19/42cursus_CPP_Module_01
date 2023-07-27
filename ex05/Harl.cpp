/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:00:49 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/27 15:00:50 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void) {
	std::cout
			<< "[ DEBUG ]" << std::endl
			<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
			<< "I really do!"
			<< std::endl;
}

void Harl::info(void) {
	std::cout
			<< "[ INFO ]" << std::endl
			<< "I cannot believe adding extra bacon costs more money. "
			<< "You didn’t put enough bacon in my burger! "
			<< "If you did, I wouldn’t be asking for more!"
			<< std::endl;
}

void Harl::warning(void) {
	std::cout
			<< "[ WARNING ]" << std::endl
			<< "I think I deserve to have some extra bacon for free. "
			<< "I’ve been coming for years whereas you started working here since last month. "
			<< std::endl;
}

void Harl::error(void) {
	std::cout
			<< "[ ERROR ]" << std::endl
			<< "This is unacceptable!"
			<< "I want to speak to the manager now."
			<< std::endl;
}

void Harl::complain(std::string level) {
	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4];
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	for (int i(0); i < 4; ++i) {
		if (level == levels[i]) {
			(this->*f[i])();
			return;
		}
	}
	std::cout
			<< "[ Probably complaining about insignificant problems ]"
			<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 04:44:26 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/22 04:44:27 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("NoName") {
	std::cout << "Zombie name \'" << this->_name << "\' Created" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Zombie name \'" << this->_name << "\' Created" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "Zombie name \'" << this->_name << "\' Destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
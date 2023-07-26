/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeong <rjeong@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 04:44:09 by rjeong            #+#    #+#             */
/*   Updated: 2023/07/22 04:44:10 by rjeong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void randomChump(std::string name);

int main() {
	Zombie Alpha = Zombie("Alpha");
	Alpha.announce();

	Zombie *Bravo = newZombie("Bravo");
	Bravo->announce();
	delete Bravo;

	randomChump("Charlie");

	return (0);
}
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

Zombie *zombieHorde(int N, std::string name);

int main() {
	int n;
	std::string zombie_name;
	Zombie *horde;

	n = 1;
	zombie_name = "Alpha";
	horde = zombieHorde(n, zombie_name);
	for (int i(0); i < n; ++i)
		horde[i].announce();
	delete[] horde;

	n = 2;
	zombie_name = "Bravo";
	horde = zombieHorde(n, zombie_name);
	for (int i(0); i < n; ++i)
		horde[i].announce();
	delete[] horde;

	n = 10;
	zombie_name = "Charlie";
	horde = zombieHorde(n, zombie_name);
	for (int i(0); i < n; ++i)
		horde[i].announce();
	delete[] horde;

	return (0);
}

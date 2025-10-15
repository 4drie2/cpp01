/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 18:53:30 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/15 20:36:35 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main(int ac, char **av)
{
	if (ac > 1 && atoi(av[1]) < 0)
	{
		std::cout << "N must be a positive integer or zero" << std::endl;
		return (1);
	}
	if (ac == 3)
	{
		int N = atoi(av[1]);
		Zombie *horde = zombieHorde(N, av[2]);
		for (int i = 0; i < N; i++)
			horde[i].announce();
		delete[] horde;
	}
	else
	{
		std::cout << "test automatique" << std::endl;
		std::cout << "Pour un test manuel, lancez le programme avec deux arguments :" << std::endl;
		std::cout << "./zombiehorde [NOMBRE DE ZOMBIES] [NOM DES ZOMBIES]" << std::endl;
		std::cout << std::endl << "================" << std::endl << std::endl;
		// empty horde
		std::cout << "test avec 0 zombies : zombieHorde(0, \"EMPTY\");" << std::endl;
		Zombie *horde = zombieHorde(0, "EMPTY");
		if (horde == 0)
			std::cout << "horde==0\nOK: returned NULL pointer" << std::endl;
		else
			std::cout << "KO: should return NULL pointer" << std::endl;
		std::cout << std::endl << "================" << std::endl << std::endl;

		//  horde of 1 zombie
		std::cout << "test avec 1 zombie : zombieHorde(1, \"ONE\");" << std::endl;
		horde = zombieHorde(1, "ONE");
		horde[0].announce();
		delete[] horde;
		std::cout << std::endl << "================" << std::endl << std::endl;

		// horde of 5 zombies
		std::cout << "test avec 5 zombies : zombieHorde(5, \"FIVE\");" << std::endl;
		horde = zombieHorde(5, "FIVE");
		for (int i = 0; i < 5; i++)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl << "================" << std::endl << std::endl;

		// horde of 100 zombies
		std::cout << "test avec 100 zombies : zombieHorde(100, \"HUNDRED\");" << std::endl;
		horde = zombieHorde(100, "HUNDRED");
		for (int i = 0; i < 100; i++)
			horde[i].announce();
		delete[] horde;
		std::cout << std::endl << "================" << std::endl << std::endl;
		std::cout << "fin des tests" << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:47:41 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/15 18:37:08 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Zombie.hpp"

int main()
{
	std::cout << "Creating a Zombie on the heap:" << std::endl;
	Zombie* heap1 = newZombie("heap1");
	heap1->announce();
	delete heap1;

	std::cout << "Creating a Zombie on the stack:" << std::endl;
	randomChump("stack1");

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 20:40:04 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/16 14:24:04 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
	std::string	htib = "HI THIS IS BRAIN";

	std::string *stringPTR = &htib;
	std::string &stringREF = htib;

	std::cout << "adresse of htib :" << &htib << std::endl;
	std::cout << "adresse of stringPTR :" << stringPTR << std::endl;
	std::cout << "adresse of stringREF :" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of htib               :" << htib << std::endl;
	std::cout << "Value of htib, by stringPTR :" << *stringPTR << std::endl;
	std::cout << "Value of htib, by stringREF :" << stringREF << std::endl;

	return (0);
}

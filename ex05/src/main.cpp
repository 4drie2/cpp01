/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:14:37 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/23 19:35:47 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl harl;

	std::cout << "----- Harl Complains -----" << std::endl;
	std::cout << std::endl << "DEBUG:" << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl << "INFO:" << std::endl;
	harl.complain("INFO");
	std::cout << std::endl << "WARNING:" << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl << "ERROR:" << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl << "INVALID:" << std::endl;
	harl.complain("INVALID");

	return 0;
}

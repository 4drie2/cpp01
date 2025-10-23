/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 18:14:37 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/23 20:28:24 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Harl.hpp"

int get_level_index(const std::string& level) {
	const std::string   levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; ++i) {
		if (levels[i] == level) {
			return i;
		}
	}

	return -1;
}

int main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Usage: " << std::endl << av[0] << " <level min>" << std::endl;
		return 1;
	}

	Harl harl;

	int level_index = get_level_index(av[1]);

	if (level_index == -1) {
		std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		return 0;
	}

	switch (level_index) {
		default:
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		case 0:
			harl.complain("DEBUG");
		case 1:
			harl.complain("INFO");
		case 2:
			harl.complain("WARNING");
		case 3:
			harl.complain("ERROR");
			break;
	}

	return 0;
}

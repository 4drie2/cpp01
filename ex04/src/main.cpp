/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:49:48 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/16 20:29:03 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int ac, char **av)
{
	//parsing
	if (ac != 4){
		std::cerr << "wrong error\n Usage : ./replace <filename> <string1> <string2>";
		return 1;
	}
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty() || s2.empty()){
		std::cerr << "string1 or string2 is empty";
		return 1;
	}

	//read file
	std::ifstream input_fstream(av[1]);
	if (!input_fstream.is_open()) {
		std::cerr << "Error opening the file!\nThe file need to be in the same directory as the executable";
		return 1;
	}

	//write file
	std::fstream output_fstream;
	output_fstream.open((std::string(av[1]) + ".replace").c_str(), std::ios_base::out);
	if (!output_fstream.is_open()) {
		std::cerr << "Failed to create output file" << '\n';
		return 1;
	}
	output_fstream << "";

	//replace
	std::string	line;
	std::size_t		index;
	while (std::getline(input_fstream, line))
	{
		index = 0;
		while ((index = line.find(s1, index)) != std::string::npos){
			line.erase(index, s1.length());
			line.insert(index, s2);
			index += s2.length();
		}
		output_fstream << line << std::endl;
	}

	input_fstream.close();
	output_fstream.close();
	return 0;
}

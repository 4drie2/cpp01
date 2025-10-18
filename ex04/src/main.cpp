/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abidaux <abidaux@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:49:48 by abidaux           #+#    #+#             */
/*   Updated: 2025/10/18 18:03:20 by abidaux          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

bool parseArguments(int ac, char **av, std::string &filename, std::string &s1, std::string &s2) {
	if (ac != 4) {
		std::cerr << "Usage: ./replace <filename> <string1> <string2>" << std::endl;
		return false;
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	if (s1.empty() || s2.empty()) {
		std::cerr << "Error: string1 or string2 is empty" << std::endl;
		return false;
	}
	return true;
}

bool openFiles(std::ifstream &input_fstream, std::ofstream &output_fstream, const std::string &filename) {
	// * infile
	input_fstream.open(filename.c_str());
	if (!input_fstream.is_open()) {
		std::cerr << "Error opening input file: " << filename << std::endl;
		return false;
	}

	// * outfile
	std::string outFilename = (filename + ".replace");
	output_fstream.open(outFilename.c_str());
	if (!output_fstream.is_open()) {
		std::cerr << "Error creating output file: " << outFilename << std::endl;
		input_fstream.close();
		return false;
	}
	return true;
}

void processReplacement(std::ifstream &input_fstream, std::ofstream &output_fstream, const std::string &s1, const std::string &s2) {
	std::string	line;
	std::size_t	index;

	while (std::getline(input_fstream, line)) {
		index = 0;
		while ((index = line.find(s1, index)) != std::string::npos) {
			line.erase(index, s1.length());
			line.insert(index, s2);
			index += s2.length();
		}
		output_fstream << line << std::endl;
	}
}

int main(int ac, char **av) {
	std::string		filename, s1, s2;

	if (!parseArguments(ac, av, filename, s1, s2))
		return 1;

	std::ifstream	input_fstream;
	std::ofstream	output_fstream;
	if (!openFiles(input_fstream, output_fstream, filename))
		return 1;

	processReplacement(input_fstream, output_fstream, s1, s2);

	input_fstream.close();
	output_fstream.close();

	return 0;
}

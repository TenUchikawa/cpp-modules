/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 02:26:51 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 03:26:48 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

// std::string getFileNameWithoutExtension(std::string orig)
// {
// 	int	i;

// 	i = orig.find_last_of(".");
// 	if (i == -1)
// 	{
// 		i = orig.length() - 1;
// 	}
// 	return (orig.substr(0, i));
// }

std::string replaceAllString(std::string str, std::string s1, std::string s2)
{
	int	index;

	std::string newLine;
	while ((index = str.find(s1)) != std::string::npos)
	{
		newLine += str.substr(0, index) + s2;
		str = str.substr(index + s1.length());
	}
	newLine += str;
	return (newLine);
}



int	main(int argc, char **argv)
{
	char **args;

	args = ++argv;
	if (argc != 4)
	{
		std::cerr << "variables unmatch" << std::endl;
		return (1);
	}
	std::string inFilename = args[0];
	std::string outFilename = inFilename + ".replace";

	std::ifstream infile(inFilename.c_str());
	if (!infile)
	{
		std::cerr << "Error: Could not open in file!" << std::endl;
		return (1);
	}

	std::ofstream outfile(outFilename.c_str());

	if (!outfile)
	{
		std::cerr << "Error: Could not open out file !" << std::endl;
		return (1);
	}

	std::string line;

	if (std::getline(infile, line))
	{
		outfile << replaceAllString(line, args[1], args[2]);
		while (std::getline(infile, line))
		{
			outfile << std::endl;
			outfile << replaceAllString(line, args[1], args[2]);
		}
	}

	infile.close();
	outfile.close();

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plee <plee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 18:04:55 by plee              #+#    #+#             */
/*   Updated: 2021/12/04 18:04:56 by plee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	CheckArg(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of argument!" << std::endl;
		std::cout << "Use : [./replace filename str1 str2]" << std::endl;
		 return (1);
	}
	else if (!*argv[1] || !*argv[2] || !*argv[3])
	{
		std::cout << "Empty is not allowed!" << std::endl;
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (CheckArg(argc, argv))
		return (-1);

	std::string fileName = argv[1];
	std::string oldStr = argv[2];
	std::string newStr = argv[3];
	std::ifstream fin(fileName);
	std::ofstream fout(fileName + ".replace");
	if (fin.fail())
	{
		std::cerr << "Failed to open file." <<std::endl;
		return (-1);
	}

	std::string line;
	bool newLine = false;
	while(std::getline(fin, line))
	{
		if (newLine == true)
			fout << std::endl;
		std::string::size_type pos = line.find(oldStr);
		while(pos != std::string::npos)
		{
			fout << line.substr(0, pos);
			line = line.substr(pos + oldStr.length());
			fout << newStr;
			pos = line.find(oldStr);
		}
		fout << line;
		newLine = true;
	}
	fin.close();
	fin.close();
	return (0);
}
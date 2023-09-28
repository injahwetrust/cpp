/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bvaujour <bvaujour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 10:54:31 by bvaujour          #+#    #+#             */
/*   Updated: 2023/09/13 13:19:07 by bvaujour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	find_and_replace(std::string& ligne, std::string tofind, std::string toreplace)
{
	int	pos;

	std::cout << ligne << std::endl;
	pos = ligne.find(tofind);
	ligne.erase(pos, tofind.length());
	ligne.insert(pos, toreplace);
	
}
int main(int ac, char **av)
{
	std::string		ligne;
	std::string		outfileName;
	std::ifstream	infile;
	std::ofstream	outfile;
	int				pos;

	if (ac != 4)
	{
		std::cout << "Wrong argument count" << std::endl;
		return (1);
	}
	infile.open(av[1]);
	if (!infile)
	{
		std::cout << "infile open error" << std::endl;
		return (2);
	}
	outfileName = av[1];
	outfileName.append(".replace");
	outfile.open(outfileName.c_str());
	if (!outfile)
	{
		std::cout << "outfile open error" << std::endl;
		return (3);
	}
	while (std::getline(infile, ligne))
	{
        pos = ligne.find(av[2]);
		while (pos != std::string::npos)
		{
			find_and_replace(ligne, av[2], av[3]);
			pos = ligne.find(av[2]);
			std::cout << ligne << std::endl;
		}
		outfile << ligne << std::endl;
	}
    infile.close();
    outfile.close();
	return (0);
}
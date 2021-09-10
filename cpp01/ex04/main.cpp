/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:36:53 by thsembel          #+#    #+#             */
/*   Updated: 2021/09/06 11:57:51 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>
# include <fstream>

int		ft_return(int ret)
{
	if (ret == 1)
	{
		std::cout << "Error: Failed to open Input file" << std::endl;
		return (1);
	}
	else if (ret == 2)
	{
		std::cout << "Error: Failed to open/create Output file" << std::endl;
		return (1);
	}
	else if (ret == 3)
	{
		std::cout << "Error: Failed to read Input file" << std::endl;
		return (1);
	}
	return (0);
}

void	ft_sed(std::string &text, std::string const &s1, std::string const &s2)
{
	std::size_t found = text.find(s1);
	while (found != std::string::npos)
	{
		text.replace(found, s1.length(), s2);
		found = text.find(s1, s2.length() + found);
	}
}

int		ft_file_handler(std::string const &file, std::string const &s1, std::string const &s2)
{
	std::string		res_file(file + ".replace");
	std::ifstream	infile(file.c_str());
	if (infile.fail())
		return (1);
	std::ofstream	output(res_file.c_str(), std::ios::trunc);
	if (output.fail())
		return (2);
	std::string text;
	while (getline(infile, text))
	{
		if (infile.fail())
			return (3);
		ft_sed(text, s1, s2);
		output << text;
		output << std::endl;
		text.clear();
	}
	return (0);
}
int		main(int ac, char **av)
{
	int ret = 0;
	if (ac != 4 || (ac == 4 && (!av[2] || !av[3])))
	{
		std::cout << "Usage: <Filename> <string1> <string2>" << std::endl;
		return (0);
	}
	ret = ft_file_handler(av[1], av[2], av[3]);
	return (ft_return(ret));
}

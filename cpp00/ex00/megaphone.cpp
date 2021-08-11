/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:36:00 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/04 13:42:35 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main(int ac, char **av)
{
	int i;
	int	j;

	if (ac == 1)
	{
		std::cout << "SHHHHH... I THINK THE STUDENTS ARE ASLEEP..." << std::endl;
		return (0);
	}
	for (i = 1; i < ac ;i++)
		for (j = 0; av[i][j]; j++)
			putchar(toupper(av[i][j]));
	std::cout << std::endl;
	return (0);
}

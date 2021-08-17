/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:48:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/17 11:53:13 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"


//token :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
int		main(int ac, char **av)
{
	Karen karen;
	if (ac != 2)
	{
		std::cout << "Usage: ./KarenFilter <Log level>" << std::endl;
		return (0);
	}
	karen.complain(av[1]);
	return (0);
}

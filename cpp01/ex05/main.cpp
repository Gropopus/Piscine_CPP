/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thsembel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 18:48:58 by thsembel          #+#    #+#             */
/*   Updated: 2021/08/17 11:37:16 by thsembel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Karen.hpp"


//token :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
int		main(void)
{
	Karen karen;

	std::cout << "---> Karen complaining with DEBUG level:\n" << std::endl;
	karen.complain("DEBUG");
	std::cout << "\n---> Karen complaining with INFO level:\n" << std::endl;
	karen.complain("INFO");
	std::cout << "\n---> Karen complaining with WARNING level:\n" << std::endl;
	karen.complain("WARNING");
	std::cout << "\n---> Karen complaining with ERROR level:\n" << std::endl;
	karen.complain("ERROR");
	std::cout << "\n---> I think we both had enough of Karen's complaints for today.\n" << std::endl;
	return (0);
}

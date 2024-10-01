/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:35:33 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 18:59:49 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>

void	print_argument(char *argument)
{
	while (*argument)
	{
		if (std::isalpha(*argument))
			std::cout << (char)std::toupper(*argument);
		else
			std::cout << *argument;
		argument++;
	}
}

int	main(int argc, char **argv)
{
	char	**args;

	args = ++argv;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		while (*args)
		{
			print_argument(*args);
			args++;
		}
		std::cout << std::endl;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:38:57 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 00:52:00 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string name;

	std::cout << "Creating zombie on the stack." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie zombi1(name);

	int hordeCount = 10;
	std::cout << "Creating zombie horde on the heap." << std::endl;
	std::cout << "Horde name: " << std::flush;
	std::cin >> name;

	Zombie *horde = zombieHorde(hordeCount, name);
	for (int i = 0; i < hordeCount; i++)
	{
		horde[i].announce();
	}

	delete[] horde;

	return (0);
}
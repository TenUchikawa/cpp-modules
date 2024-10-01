/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:38:57 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 00:41:36 by tuchikaw         ###   ########.fr       */
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

	std::cout << "Creating zombie on the heap." << std::endl;
	std::cout << "Zombie name: " << std::flush;
	std::cin >> name;

	Zombie *zombi2 = newZombie(name);
	zombi2->announce();
	delete zombi2;

	std::cout << "Calling randomChump()." << std::endl;
	randomChump("randi");
	return (0);
}
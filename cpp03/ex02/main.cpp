/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:53:19 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 13:46:00 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "----- Test 1: Creating a FragTrap instance -----" << std::endl;
	FragTrap frag("Fraggy");

	std::cout << "\n----- Test 2: Checking FragTrap's attack, takeDamage,\
 and beRepaired -----"
				<< std::endl;
	frag.attack("Target Dummy");
	frag.takeDamage(20);
	frag.beRepaired(15);

	std::cout << "\n----- Test 3: FragTrap requests high fives -----" << std::endl;
	frag.highFivesGuys();

	std::cout << "\n----- Test 4: Destroying FragTrap instance -----" << std::endl;

	return (0);
}
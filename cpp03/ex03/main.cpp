/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:53:19 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 14:04:51 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "----- Test 1: Creating a DiamondTrap instance -----" << std::endl;
	DiamondTrap diamond("Diamondy");

	std::cout << "\n----- Test 2: Checking DiamondTrap's attack -----" << std::endl;
	diamond.attack("Target Dummy"); // ScavTrapのattack()を使用

	std::cout << "\n----- Test 3: Taking damage and repairing -----" << std::endl;
	diamond.takeDamage(20); // ClapTrapから継承
	diamond.beRepaired(10); // ClapTrapから継承

	std::cout << "\n----- Test 4: Calling DiamondTrap's whoAmI() -----" << std::endl;
	diamond.whoAmI(); // DiamondTrap独自のwhoAmI()を使用

	std::cout << "\n----- Test 5: Destroying DiamondTrap instance -----" << std::endl;
	return (0); // スコープを抜けるときにデストラクタが呼ばれる
}
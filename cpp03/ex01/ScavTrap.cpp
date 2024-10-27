/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:07:43 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 03:26:49 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << name << " is created!" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " is destroyed!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->canAction())
		return ;
	this->_energyPoints--;
	std::cout << "ScavTrap " << _name << " attacks " << target << ",\
		causing "
				<< _attackDamage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is entered gatekeeper mode" << std::endl;
}

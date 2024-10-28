/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:29:40 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 13:47:23 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10),
	_energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << name << " is created!" << std::endl;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

bool ClapTrap::canAction()
{
	if (_hitPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of hit points!" << std::endl;
		return (false);
	}
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " has no energy left to attack!" << std::endl;
		return (false);
	}
	return (true);
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->canAction())
		return ;
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << ",\
 causing " << _attackDamage
				<< " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->canAction())
		return ;
	if (this->_hitPoints < amount)
		amount = this->_hitPoints;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->canAction())
		return ;
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << _name << " is repaired by " << amount << " points!" << std::endl;
}

std::string ClapTrap::getName()
{
	return (this->_name);
}

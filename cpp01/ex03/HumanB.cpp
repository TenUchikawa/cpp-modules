/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:13:35 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 02:09:31 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weapon = NULL;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
	if (this->_weapon != NULL && this->_weapon->getType() != "")
	{
		std::cout << _name << " attacks with their " << this->_weapon->getType() << std::endl;
	}
	else
	{
		std::cout << _name << " doesn't have a weapon to attack." << std::endl;
	}
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
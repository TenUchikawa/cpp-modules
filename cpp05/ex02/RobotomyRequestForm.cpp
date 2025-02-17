/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:47 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/02/17 13:15:36 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src) : AForm(src), _target(src._target) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
	{
		AForm::operator=(rhs);
		_target = rhs._target;
	}
	return *this;
}



/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void RobotomyRequestForm::executeAction() const
{
	std::cout << "Drilling noises..." << std::endl;
	if (rand() % 2)
	{
		std::cout << _target << " successfully robotomized." << std::endl;
	}
	else
	{
		std::cout << _target << " failed to robotomize." << std::endl;
	}
};

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
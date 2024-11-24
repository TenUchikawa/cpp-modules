/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:47 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 15:53:20 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy Request", 72, 45), _target(target) {}

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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:35 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:31:58 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AForm::AForm(std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AForm::~AForm()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AForm &AForm::operator=(AForm const &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, AForm const &i)
{
	o << "Form " << i.getName() << ", signed: " << i.getIsSigned() << ", grade to sign: " << i.getGradeToSign() << ", grade to execute: " << i.getGradeToExecute();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void AForm::beSigned(Bureaucrat &bureaucrat)
{
	if (_gradeToSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

void AForm::execute(Bureaucrat const &executor) const
{
	if (!_isSigned)
		throw FormNotSignedException();
	if (executor.getGrade() > _gradeToExecute)
		throw GradeTooLowException();
	executeAction();
};

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string &AForm::getName() const
{
	return this->_name;
}

bool AForm::getIsSigned() const
{
	return this->_isSigned;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}
/* ************************************************************************** */
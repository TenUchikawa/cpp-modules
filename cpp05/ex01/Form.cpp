/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:37:04 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 14:34:50 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp" // Bureaucratの完全な定義が必要

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Form::Form(
	std::string name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
}

Form::Form(const Form &src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExecute(src._gradeToExecute)
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Form::~Form()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	o << "Form " << i.getName() << ", signed: " << i.getIsSigned() << ", grade to sign: " << i.getGradeToSign() << ", grade to execute: " << i.getGradeToExecute();
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (_gradeToSign < bureaucrat.getGrade())
		throw GradeTooLowException();
	_isSigned = true;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
const std::string &Form::getName() const
{
	return this->_name;
}

bool Form::getIsSigned() const
{
	return this->_isSigned;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}
/* ************************************************************************** */
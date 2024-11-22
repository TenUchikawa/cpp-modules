/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:53:10 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/22 20:22:51 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();

	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	this->operator=(src);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Bureaucrat::~Bureaucrat()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs.getGrade();
	}
	return *this;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i)
{

	o << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Bureaucrat::incrementGrade()
{
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}
void Bureaucrat::decrementGrade()
{
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

const std::string &Bureaucrat::getName() const
{
	return _name;
}
int Bureaucrat::getGrade() const
{
	return _grade;
}

/* ************************************************************************** */
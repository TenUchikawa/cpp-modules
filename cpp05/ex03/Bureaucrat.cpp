/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:53:10 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:21:12 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp" // Formの完全な定義が必要

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

Bureaucrat::Bureaucrat(const Bureaucrat &src) : _name(src._name)
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

void Bureaucrat::signForm(AForm &form)
{

	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{

		std::cout << _name << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const &form)
{
	try
	{

		form.execute(*this);
		std::cout << _name << " executed " << form.getName() << std::endl;
	}
	catch (const std::exception &e)
	{

		std::cout << _name << " couldn’t execute " << form.getName() << " because " << e.what() << std::endl;
	}
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:34:17 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:59:54 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
}

Intern::Intern(const Intern &src)
{
	(void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}
/*
** --------------------------------- METHODS ----------------------------------
*/
AForm *createShrubberyForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm *createRobotomyForm(std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm *createPresidentialForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
	const std::string formNames[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"};
	AForm *(*formCreators[])(std::string) = {
		createShrubberyForm,
		createRobotomyForm,
		createPresidentialForm};
	// フォーム名が存在するか確認して生成
	for (size_t i = 0; i < 3; ++i)
	{
		if (formName == formNames[i])
		{
			std::cout << "Intern creates " << formNames[i] << " form." << std::endl;
			return formCreators[i](target);
		}
	}

	// 無効なフォーム名
	std::cerr << "Error: Form name \"" << formName << "\" is invalid." << std::endl;
	return NULL;
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
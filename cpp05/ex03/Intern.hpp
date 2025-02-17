/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:34:18 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/02/17 13:30:34 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <map>

class Intern
{

public:
	Intern();
	Intern(Intern const &src);
	~Intern();

	Intern &operator=(Intern const &rhs);

	AForm *makeForm(std::string formName, std::string target);

private:
};


#endif /* ********************************************************** INTERN_H */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:38 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/02/17 13:16:34 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include <fstream>
class ShrubberyCreationForm : public AForm
{

public:
	ShrubberyCreationForm(std::string target = "Default");
	ShrubberyCreationForm(const ShrubberyCreationForm &src);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);

private:
	std::string _target;

protected:
	void executeAction() const;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
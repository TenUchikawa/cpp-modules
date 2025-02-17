/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:38 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:22:53 by tuchikaw         ###   ########.fr       */
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
	~ShrubberyCreationForm();

private:
	const std::string _target;

protected:
	void executeAction() const;
};

#endif /* ******************************************* SHRUBBERYCREATIONFORM_H */
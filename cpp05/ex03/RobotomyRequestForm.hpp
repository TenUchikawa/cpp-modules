/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:47 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/02/17 13:15:44 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include <math.h>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{

public:
	RobotomyRequestForm(std::string target = "Default");
	RobotomyRequestForm(const RobotomyRequestForm &src);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs );

private:
	std::string _target;

protected:
	void executeAction() const;
};

#endif /* ********************************************* ROBOTOMYREQUESTFORM_H */
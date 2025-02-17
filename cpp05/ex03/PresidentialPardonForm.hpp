/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:59 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/02/17 13:15:16 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{

public:
	PresidentialPardonForm(std::string target = "Default");
	PresidentialPardonForm(const PresidentialPardonForm &src);
	~PresidentialPardonForm();

	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);

private:
	std::string _target;

protected:
	void executeAction() const;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
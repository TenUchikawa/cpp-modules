/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 15:24:59 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:27:22 by tuchikaw         ###   ########.fr       */
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
	~PresidentialPardonForm();

private:
	const std::string _target;

protected:
	void executeAction() const;
};

#endif /* ****************************************** PRESIDENTIALPARDONFORM_H */
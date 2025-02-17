/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 14:36:35 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:31:18 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"


class AForm
{

public:
	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw() { return "Grade is too high!"; }
	};

	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw() { return "Grade is too low!"; }
	};

	class FormNotSignedException : public std::exception
	{
		virtual const char *what() const throw() { return "Form is not signed!"; }
	};

	AForm(std::string name = "Default", int gradeToSign = 1, int gradeToExecute = 1);
	AForm(AForm const &src);
	virtual ~AForm();
	AForm &operator=(AForm const &rhs);

	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);

	void execute(Bureaucrat const &executor) const;

protected:
	virtual void executeAction() const = 0;

private:
	std::string const _name;
	bool _isSigned;
	int const _gradeToSign;
	int const _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, AForm const &i);

#endif /* *********************************************************** AFORM_H */
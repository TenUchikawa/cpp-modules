/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 13:37:04 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 14:27:33 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
// #include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{

public:
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too low!";
		}
	};

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too high!";
		}
	};

	Form(std::string name = "Default", int gradeToSign = 1, int gradeToExecute = 1);
	Form(Form const &src);
	~Form();

	Form &operator=(Form const &rhs);

	const std::string &getName() const;
	bool getIsSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);

private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif /* ************************************************************ FORM_H */
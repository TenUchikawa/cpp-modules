/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 19:53:11 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 14:27:27 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

// #include "Form.hpp"
class Form;

class Bureaucrat
{

public:
	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too high!";
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw()
		{
			return "Grade is too low!";
		}
	};

	Bureaucrat(std::string name = "Default", int grade = 1);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	void incrementGrade();
	void decrementGrade();

	const std::string &getName() const;
	int getGrade() const;

	void signForm(Form &form);

private:
	const std::string _name;
	int _grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &i);

#endif /* ****************************************************** BUREAUCRAT_H */
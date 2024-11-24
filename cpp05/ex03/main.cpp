/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:30:23 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:49:19 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

#include "Intern.hpp"

int main()
{
    Intern intern;

    // 有効なフォーム生成
    AForm *form1 = intern.makeForm("shrubbery creation", "home");
    AForm *form2 = intern.makeForm("robotomy request", "Bender");
    AForm *form3 = intern.makeForm("presidential pardon", "Ford");

    // 無効なフォーム生成
    AForm *invalidForm = intern.makeForm("invalid form", "target");

    // メモリ解放
    delete form1;
    delete form2;
    delete form3;
    delete invalidForm;

    return 0;
}
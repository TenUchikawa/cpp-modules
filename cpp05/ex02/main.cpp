/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:30:23 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/11/24 16:30:24 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        // Bureaucratを作成
        Bureaucrat alice("Alice", 140);
        Bureaucrat bob("Bob", 50);
        Bureaucrat carol("Carol", 5);

        // ShrubberyCreationFormのテスト
        ShrubberyCreationForm shrubbery("garden");
        std::cout << shrubbery << std::endl;

        // Aliceが署名を試みる（成功）
        alice.signForm(shrubbery);
        std::cout << shrubbery << std::endl;

        // Aliceが実行を試みる（失敗: グレード不足）
        alice.executeForm(shrubbery);

        // Bobが実行を試みる（成功）
        bob.executeForm(shrubbery);
        std::cout << "ShrubberyCreationForm test completed.\n"
                  << std::endl;

        // RobotomyRequestFormのテスト
        RobotomyRequestForm robotomy("robot");
        std::cout << robotomy << std::endl;

        // Bobが署名を試みる（成功）
        bob.signForm(robotomy);
        std::cout << robotomy << std::endl;

        // Bobが実行を試みる（失敗: グレード不足）
        bob.executeForm(robotomy);

        // Carolが実行を試みる（50%の確率で成功）
        carol.executeForm(robotomy);
        std::cout << "RobotomyRequestForm test completed.\n"
                  << std::endl;

        // PresidentialPardonFormのテスト
        PresidentialPardonForm pardon("Alice");
        std::cout << pardon << std::endl;

        // Carolが署名を試みる（成功）
        carol.signForm(pardon);
        std::cout << pardon << std::endl;

        // Carolが実行を試みる（成功）
        carol.executeForm(pardon);
        std::cout << "PresidentialPardonForm test completed.\n"
                  << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // try {
    //     // 無効なフォーム（例外をスローする）
    //     ShrubberyCreationForm invalidForm("invalid", 0, 151);
    // } catch (std::exception &e) {
    //     std::cerr << "Exception caught during invalid form creation: " << e.what() << std::endl;
    // }

    return 0;
}
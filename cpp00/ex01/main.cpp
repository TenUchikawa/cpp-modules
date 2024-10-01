/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:45:24 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:47:08 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"
#include <iostream>
#include <string>

std::string getInput(std::string message)
{
	std::string user_input = "";
	{
		std::cout << message;
		std::getline(std::cin, user_input);
	}
	return (user_input);
}

void	add_contact(PhoneBook *phoneBook)
{
	std::string first_name = getInput("Enter first name: ");
	if (first_name.empty())
	{
		std::cout << "First name cannot be empty!" << std::endl;
		return ;
	}
	std::string last_name = getInput("Enter last name: ");
	if (last_name.empty())
	{
		std::cout << "Last name cannot be empty!" << std::endl;
		return ;
	}
	std::string nick_name = getInput("Enter nick name: ");
	if (nick_name.empty())
	{
		std::cout << "Nick name cannot be empty!" << std::endl;
		return ;
	}
	std::string phone_number = getInput("Enter phone number: ");
	if (phone_number.empty())
	{
		std::cout << "Phone number cannot be empty!" << std::endl;
		return ;
	}
	std::string darkest_secret = getInput("Enter darkest secret: ");
	if (darkest_secret.empty())
	{
		std ::cout << "Darkest secret cannot be empty!" << std::endl;
		return ;
	}
	phoneBook->add_contact(first_name, last_name, nick_name, phone_number,
		darkest_secret);
}

int	main(void)
{
	PhoneBook	phoneBook;

	std::string command;
	while (1)
	{
		std::cout << std::endl
					<< "Type ADD to save a new contact,\
			SEARCH to search for a contact or EXIT to exit the program"
					<< std::endl;
		std::cout << "Enter command: ";
		if (!(std::getline(std::cin, command)))
			return (1);
		if (command.compare("ADD") == 0)
			add_contact(&phoneBook);
		else if (command.compare("SEARCH") == 0)
			search_contact(&phoneBook);
		else if (command.compare("EXIT") == 0)
			break ;
		else
			std::cout << "Invalid command!" << std::endl;
	}
	return (0);
}

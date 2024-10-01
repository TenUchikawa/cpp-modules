/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:49:40 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:41 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "main.hpp"

static void	print_text(std::string text, bool newline)
{
	if (text.length() > 10)
	{
		text.resize(9);
		text.append(".");
	}
	if (newline)
		std::cout << std::setfill(' ') << std::setw(10) << text << std::endl;
	else
		std::cout << std::setfill(' ') << std::setw(10) << text << "|";
}

static void	print_column_names(void)
{
	print_text("index", false);
	print_text("first name", false);
	print_text("last name", false);
	print_text("nickname", true);
}

static void	print_contact(Contact contact, int index)
{
	std::stringstream ss;
	ss << index;
	print_text(ss.str(), false);
	print_text(contact.get_first_name(), false);
	print_text(contact.get_last_name(), false);
	print_text(contact.get_nickname(), true);
}

static void	print_contact_details(Contact contact)
{
	std::cout << "First name: " << contact.get_first_name() << std::endl;
	std::cout << "Last name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

void	search_contact(PhoneBook *phoneBook)
{
	int	index;

	std::string input;
	if (phoneBook->get_num_entries() == 0)
	{
		std::cout << "No contacts available." << std::endl;
		return ;
	}
	print_column_names();
	for (int i = 0; i < phoneBook->get_num_entries(); i++)
	{
		print_contact(phoneBook->contacts[i], i);
	}
	std::cout << "Enter index of contact to view: ";
	std::getline(std::cin, input);
	if (input.length() == 1 && std::isdigit(input[0]))
	{
		index = input[0] - '0';
		if (index >= 0 && index < phoneBook->get_num_entries())
		{
			print_contact_details(phoneBook->contacts[index]);
		}
		else
		{
			std::cout << "Invalid index." << std::endl;
		}
	}
	else
	{
		std::cout << "Invalid input." << std::endl;
	}
}

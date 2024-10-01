/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:05:26 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:26:27 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	search_oldest_entry(Contact contacts[MAX_CONTACTS])
{
	int	oldest;

	oldest = 0;
	for (int i = 0; i < MAX_CONTACTS; i++)
	{
		if (contacts[i].get_created() < contacts[oldest].get_created())
			oldest = i;
	}
	return (oldest);
}

PhoneBook::PhoneBook()
{
	_num_entries = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	if (_num_entries < MAX_CONTACTS)
	{
		contacts[_num_entries] = Contact(first_name, last_name, nickname,
				phone_number, darkest_secret);
		_num_entries++;
	}
	else
		contacts[search_oldest_entry(contacts)] = Contact(first_name, last_name,
				nickname, phone_number, darkest_secret);
}

int PhoneBook::get_num_entries()
{
	return (this->_num_entries);
}

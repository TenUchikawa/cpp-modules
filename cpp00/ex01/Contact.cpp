/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:12:05 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:14:42 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	_First_name = "";
	_Last_name = "";
	_Created = time(&_Created);
}

Contact::Contact(std::string first_name, std::string last_name,
	std::string nickname, std::string phone_number, std::string darkest_secret)
{
	_First_name = first_name;
	_Last_name = last_name;
	_Nickname = nickname;
	_Phone_number = phone_number;
	_Darkest_secret = darkest_secret;
	time(&_Created);
}

Contact::~Contact()
{
}

std::string Contact::get_first_name() const
{
	return (_First_name);
}

std::string Contact::get_last_name() const
{
	return (_Last_name);
}

std::string Contact::get_nickname() const
{
	return (_Nickname);
}

std::string Contact::get_phone_number() const
{
	return (_Phone_number);
}

std::string Contact::get_darkest_secret() const
{
	return (_Darkest_secret);
}

std::string Contact::get_created() const
{
	return (ctime(&_Created));
}

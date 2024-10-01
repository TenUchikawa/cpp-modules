/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 16:49:14 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:23:03 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <ctime>
# include <iomanip>
# include <iostream>
# include <sstream>
# include <string>

# define MAX_CONTACTS 8

class PhoneBook
{
  private:
	int _num_entries;

  public:
	Contact contacts[MAX_CONTACTS];
	PhoneBook();
	~PhoneBook();
	void add_contact(std::string first_name, std::string last_name,
		std::string nickname, std::string phone_number,
		std::string darkest_secret);
	int get_num_entries();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:49:50 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/01 17:49:51 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H
# include <ctime>
# include <string>

class Contact
{
  private:
	std::string _Last_name;
	std::string _First_name;
	std::string _Nickname;
	std::string _Phone_number;
	std::string _Darkest_secret;
	std::time_t _Created;

  public:
	Contact();
	~Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
		std::string phone_number, std::string darkest_secret);

	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;
	std::string get_created() const;
};

#endif

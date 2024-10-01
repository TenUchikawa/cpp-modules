/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 00:59:21 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 01:11:47 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "String                : " << str << std::endl;
	std::cout << "Memory address        : " << stringPTR << std::endl;
	std::cout << "Memory ref            : " << stringREF << std::endl;
	std::cout << "Memory ref address    : " << &stringREF << std::endl;
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:24:50 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 15:11:09 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}
void Dog::makeSound() const
{
	std::cout << "Dog makes sound" << std::endl;
}

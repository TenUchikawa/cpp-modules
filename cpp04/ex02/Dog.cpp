/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:24:50 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 19:26:04 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal::Animal("Dog"), brain(new Brain())
{
}

Dog::~Dog()
{
	delete brain;

	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(const Dog &other)
{
	this->operator=(other);
}

Dog &Dog::operator=(const Dog &other)
{

	if (this != &other)
	{
		Animal::operator=(other); // 基底クラス部分を代入
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog makes sound" << std::endl;
}

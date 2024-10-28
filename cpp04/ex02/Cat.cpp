/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:24:47 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 20:59:02 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal::Animal("Cat"), brain(new Brain())
{
}

Cat::~Cat()
{
	delete brain;

	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &other)
{
	this->operator=(other);
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other); // 基底クラス部分を代入
		delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat makes sound" << std::endl;
}

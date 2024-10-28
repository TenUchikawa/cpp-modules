/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:47:57 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/29 00:09:27 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "----- Correct Polymorphism Test -----" << std::endl;

	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();	   // Catのサウンドが出力される
	j->makeSound();	   // Dogのサウンドが出力される
	meta->makeSound(); // Animalのサウンドが出力される

	// delete meta;
	delete j;
	delete i;

	std::cout << "\n----- Wrong Polymorphism Test -----" << std::endl;

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;

	wrongCat->makeSound();	  // 正しくないポリモーフィズムの例
	wrongAnimal->makeSound(); // WrongAnimalのサウンド

	delete wrongAnimal;
	delete wrongCat;

	return (0);
}
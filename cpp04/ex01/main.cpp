/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:47:57 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 17:28:22 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << "Deleting Dog and Cat objects..." << std::endl;
	delete j; // 正しくDogのデストラクタが呼ばれる
	delete i; // 正しくCatのデストラクタが呼ばれる

	std::cout << "\nCreating an array of Animals..." << std::endl;
	const Animal *animals[4];
	animals[0] = new Dog();
	animals[1] = new Dog();
	animals[2] = new Cat();
	animals[3] = new Cat();

	std::cout << "Deleting the array of Animals..." << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete animals[i]; // 各Animalのデストラクタが正しく呼ばれる
	}

	return (0);
}
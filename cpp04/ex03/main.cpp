/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:06:05 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/29 01:26:43 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    // IMateriaSource *src = new MateriaSource();
    // src->learnMateria(new Ice());
    // src->learnMateria(new Cure());

    // ICharacter *me = new Character("me");
    // AMateria *tmp;

    // tmp = src->createMateria("Ice");
    // // std::cout << "materiaType :" << tmp << std::endl;

    // me->equip(tmp);
    // tmp = src->createMateria("Cure");
    // me->equip(tmp);

    // ICharacter *bob = new Character("bob");

    // me->use(0, *bob);
    // me->use(1, *bob);

    // delete bob;
    // delete me;
    // delete src;

    // return 0;

    std::cout << "===== Test: MateriaSource Learning and Creation =====" << std::endl;

    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    AMateria *ice = src->createMateria("ice");
    AMateria *cure = src->createMateria("cure");

    if (ice && cure)
    {
        std::cout << "Materia successfully created: Ice and Cure" << std::endl;
    }
    else
    {
        std::cerr << "Error: Failed to create materia." << std::endl;
    }

    std::cout << "\n===== Test: Character Inventory Management =====" << std::endl;
    ICharacter *me = new Character("me");

    std::cout << "Equipping Ice and Cure..." << std::endl;
    me->equip(ice);
    me->equip(cure);

    std::cout << "Trying to equip a third Ice..." << std::endl;
    me->equip(new Ice()); // 3rd slot

    std::cout << "Unequipping slot 1 (Cure)..." << std::endl;
    me->unequip(1); // Unequip Cure

    std::cout << "Re-equipping Cure to slot 1..." << std::endl;
    me->equip(new Cure());

    std::cout << "\n===== Test: Character Materia Usage =====" << std::endl;
    ICharacter *bob = new Character("Bob");

    me->use(0, *bob); // Should use Ice on Bob
    me->use(1, *bob); // Should use Cure on Bob

    std::cout << "Trying to use an unoccupied slot..." << std::endl;
    me->use(3, *bob); // Should do nothing

    std::cout << "\n===== Test: Memory Management =====" << std::endl;
    delete bob;
    delete me;
    delete src; // Should delete learned materia and source
    std::cout << "All objects successfully deleted." << std::endl;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 10/29/2024 12:40:56 AM by tuchikaw          #+#    #+#             */
/*   Updated: 10/29/2024 12:40:56 AM by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name)
{
    for (int i = 0; i < 4; ++i)
    {
        inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; ++i)
    {
        if (inventory[i] != NULL)
        {
            delete inventory[i];
        }
    }
}

std::string const &Character::getName() const
{
    return name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 3; i++)
    {
        if (inventory[i] == NULL)
        {
            inventory[i] = m;
            break;
        }
    }
}
void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;

    if (inventory[idx] != NULL)
    {
        delete inventory[idx];
    }
    inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
    if (inventory[idx] == NULL)
        return;
    inventory[idx]->use(target);
}

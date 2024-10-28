/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 10/29/2024 12:22:10 AM by tuchikaw          #+#    #+#             */
/*   Updated: 10/29/2024 12:22:10 AM by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{

protected:
    std::string type;

public:
    AMateria(std::string const &type);
    virtual ~AMateria();
    std::string const &getType() const;

    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);

private:
};

#endif
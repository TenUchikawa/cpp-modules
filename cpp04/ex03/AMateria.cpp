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

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type)
{
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* uses a generic materia on " << target.getName() << " *" << std::endl;
}

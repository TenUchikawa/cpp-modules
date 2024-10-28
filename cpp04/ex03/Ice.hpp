/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 10/29/2024 12:27:06 AM by tuchikaw          #+#    #+#             */
/*   Updated: 10/29/2024 12:27:06 AM by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
#define ICE_H

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
    Ice();
    ~Ice();
    AMateria *clone() const;
    void use(ICharacter &target);

private:
};

#endif
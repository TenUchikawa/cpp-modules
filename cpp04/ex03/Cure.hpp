/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 10/29/2024 12:27:14 AM by tuchikaw          #+#    #+#             */
/*   Updated: 10/29/2024 12:27:14 AM by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
#define CURE_H

#include "AMateria.hpp"
class Cure : public AMateria
{
public:
    Cure();
    ~Cure();
    AMateria *clone() const;
    void use(ICharacter &target);

private:
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:03:40 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 13:59:54 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include "ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap(const std::string &name);
	~ScavTrap();
	void attack(const std::string &target);
	void guardGate();
};
#endif

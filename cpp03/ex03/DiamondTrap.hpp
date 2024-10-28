/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 03:03:40 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 13:54:06 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_TRAP_HPP
# define DIAMOND_TRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
  private:
	std::string _name;

  public:
	DiamondTrap(const std::string &name);
	~DiamondTrap();

	void attack(const std::string &target); // ScavTrap の attack() を使用
	void whoAmI();                          // DiamondTrap 独自の関数
};
#endif

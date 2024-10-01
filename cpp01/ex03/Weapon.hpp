/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 01:13:43 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/02 02:08:14 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <cstddef>
# include <iostream>

class Weapon
{
  private:
	std::string type;

  public:
	Weapon(std::string type);
	std::string getType(void);
	void setType(std::string type);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 15:21:47 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 17:23:48 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>

class Brain
{
  public:
	Brain();
	Brain(Brain &other);
	Brain &operator=(Brain &other);
	~Brain();

  private:
	std::string ideas[100];
};

#endif
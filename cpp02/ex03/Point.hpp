/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:17:24 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/27 18:41:16 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
  private:
	const Fixed x;
	const Fixed y;

  public:
	Point();
	Point(float x, float y);
	Point(const Point &point);
	Point &operator=(const Point &point);
	~Point();
};

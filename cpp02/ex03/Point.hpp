/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:17:24 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 02:23:26 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
  private:
	const Fixed _x;
	const Fixed _y;

  public:
	Point();
	Point(float x, float y);
	Point(const Point &point);
	Point &operator=(const Point &point);
	~Point();

	Fixed getX() const;
	Fixed getY() const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif
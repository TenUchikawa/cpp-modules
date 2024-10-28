/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 18:41:31 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 16:09:01 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
}
Point::Point(float x, float y) : _x(x), _y(y)
{
}
Point::Point(const Point &point)
{
	this->operator=(point);
}

Point &Point::operator=(const Point &point)
{
	if (this != &point)
	{
		(Fixed) this->_x = point.getX();
		(Fixed) this->_y = point.getY();
	}
	return (*this);
}
Point::~Point()
{
}

Fixed Point::getX() const
{
	return (this->_x);
}

Fixed Point::getY() const
{
	return (this->_y);
}

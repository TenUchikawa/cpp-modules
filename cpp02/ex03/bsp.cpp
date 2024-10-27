/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:02:53 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 02:15:54 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float	area(Point const &a, Point const &b, Point const &c)
{
	return (((a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())
				+ b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())
				+ c.getX().toFloat() * (a.getY().toFloat()
					- b.getY().toFloat())) / 2.0f));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	totalArea;
	float	area1;
	float	area2;
	float	area3;

	totalArea = area(a, b, c);
	area1 = area(point, b, c);
	area2 = area(a, point, c);
	area3 = area(a, b, point);
	return (totalArea == area1 + area2 + area3);
}

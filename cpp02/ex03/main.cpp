/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:15:56 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 02:25:19 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Point.hpp"
#include <iostream>


/*

三角形ABC（元の三角形）が、以下3つの三角の合計面積と一緒か判定する
点 P を使って作られる3つの小三角形：
三角形 ABP の面積
三角形 BCP の面積
三角形 CAP の面積
*/


int	main(void)
{
	Point a(0, 0);
	Point b(10, 0);
	Point c(0, 10);
	Point p(3, 3);

	if (bsp(a, b, c, p))
	{
		std::cout << "The point is inside the triangle." << std::endl;
	}
	else
	{
		std::cout << "The point is outside the triangle." << std::endl;
	}

	return (0);
}
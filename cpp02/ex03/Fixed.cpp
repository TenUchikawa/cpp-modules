/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 15:15:53 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 02:13:26 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>
#include <iostream>

Fixed::Fixed()
{
	this->_fixedPointValue = 0;
}
Fixed::Fixed(const Fixed &fixed)
{
	this->operator=(fixed);
}

Fixed::Fixed(const int nb)
{
	this->_fixedPointValue = nb << this->_fractionalBits;
}

Fixed::Fixed(const float nb)
{
	this->_fixedPointValue = (roundf(nb * (1 << this->_fractionalBits)));
}

Fixed::~Fixed()
{
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this != &fixed)
		this->_fixedPointValue = fixed.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &oS, const Fixed &fixed)
{
	oS << fixed.toFloat();
	return (oS);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_fractionalBits);
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (1 << this->_fractionalBits));
}

// overload compare operators
bool Fixed::operator>(const Fixed &other) const
{
	return (this->_fixedPointValue > other.getRawBits());
}

bool Fixed::operator<(const Fixed &other) const
{
	return (this->_fixedPointValue < other.getRawBits());
}
bool Fixed::operator>=(const Fixed &other) const
{
	return (this->_fixedPointValue >= other.getRawBits());
}
bool Fixed::operator<=(const Fixed &other) const
{
	return (this->_fixedPointValue <= other.getRawBits());
}
bool Fixed::operator==(const Fixed &other) const
{
	return (this->_fixedPointValue == other.getRawBits());
}
bool Fixed::operator!=(const Fixed &other) const
{
	return (this->_fixedPointValue != other.getRawBits());
}

// overload math
Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if (this->_fixedPointValue == 0 || other._fixedPointValue == 0)
	{
		std::cout << "Error";
		return (Fixed());
	}
	return (Fixed(this->toFloat() / other.toFloat()));
}

// increase decrease

Fixed &Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = Fixed(*this);
	this->_fixedPointValue++;
	return (tmp);
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = Fixed(*this);
	this->_fixedPointValue--;
	return (tmp);
}

// Min Max
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return ((a < b) ? a : b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a < b) ? a : b);
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return ((a > b) ? a : b);
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return ((a > b) ? a : b);
}

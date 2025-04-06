/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 08:12:09 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/04/06 16:03:32 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cfloat>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cctype>

// 擬似リテラル判定用関数
static bool isPseudoLiteral(const std::string &str)
{
	return (str == "nan" || str == "nanf" ||
			str == "+inf" ||
			str == "-inf");
}

void ScalarConverter::convert(const std::string &literal)
{
	std::cout << std::fixed << std::setprecision(1);

	// 擬似リテラルの場合の出力
	if (isPseudoLiteral(literal))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;

		std::cout << "double: " << (literal.find("f") != std::string::npos ? literal.substr(0, literal.size() - 1) : literal) << std::endl;
		return;
	}

	// 単一文字かつ数字でない場合 → charリテラルとして扱う
	if (literal.length() == 1 && !std::isdigit(literal[0]))
	{
		char c = literal[0];
		std::cout << "char: '" << c << "'" << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
		return;
	}

	// 文字列を double に変換（末尾に'f'がある場合は無視）
	char *endPtr = NULL;
	try
	{
		double d = std::strtod(literal.c_str(), &endPtr);
		if (*endPtr != '\0' && *endPtr != 'f')
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
			return;
		}

		// int への変換（範囲チェック）
		if (d < static_cast<double>(INT_MIN) || d > static_cast<double>(INT_MAX))
			std::cout << "int: impossible" << std::endl;
		else
		{
			int i = static_cast<int>(d);
			std::cout << "int: " << i << std::endl;
		}

		// char への変換（表示可能かどうかのチェック）
		if (d < 0 || d > 127 || std::isnan(d))
			std::cout << "char: impossible" << std::endl;
		else
		{
			char c = static_cast<char>(d);
			if (!std::isprint(c))
				std::cout << "char: Non displayable" << std::endl;
			else
				std::cout << "char: '" << c << "'" << std::endl;
		}

		// float と double の出力
		float f = static_cast<float>(d);
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return;
	}
}

// インスタンス化禁止のための実装
ScalarConverter::ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter &) {}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &) { return *this; }
ScalarConverter::~ScalarConverter() {}

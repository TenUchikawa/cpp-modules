/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:53:19 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 03:27:15 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	// ScavTrap オブジェクトを生成
	std::cout << "== Create ScavTrap ==" << std::endl;
	ScavTrap scav("Guardian");

	std::cout << std::endl;

	// 攻撃テスト
	std::cout << "== Attack Test ==" << std::endl;
	scav.attack("Intruder");

	std::cout << std::endl;

	// Gatekeeper モードテスト
	std::cout << "== Guard Gate Test ==" << std::endl;
	scav.guardGate();

	std::cout << std::endl;

	// エネルギーが尽きるまで攻撃する
	std::cout << "== Exhaust Energy Test ==" << std::endl;
	for (int i = 0; i < 51; ++i)
	{
		scav.attack("Intruder");
	}

	std::cout << std::endl;

	// オブジェクトが自動的に破棄されるときの出力を確認
	std::cout << "== Program End ==" << std::endl;
	return (0);
}
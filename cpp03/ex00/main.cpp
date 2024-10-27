/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:53:19 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/10/28 03:01:47 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	// 1. ClapTrap オブジェクトを生成
	ClapTrap robot1("Robot1");
	ClapTrap robot2("Robot2");

	std::cout << std::endl;

	// 2. Robot1 が Robot2 を攻撃
	std::cout << "== Attack Test ==" << std::endl;
	robot1.attack("Robot2");

	// 3. Robot2 がダメージを受ける
	std::cout << "== Take Damage Test ==" << std::endl;
	robot2.takeDamage(5); // Robot2 の体力が 10 から 5 になる

	// 4. Robot2 が自分を修理する
	std::cout << "== Repair Test ==" << std::endl;
	robot2.beRepaired(3); // Robot2 の体力が 5 から 8 に回復

	// 5. Robot1 がエネルギーを使い果たすまで攻撃する
	std::cout << "== Exhaust Energy Test ==" << std::endl;
	for (int i = 0; i < 10; ++i)
	{ // 10回目でエネルギーが尽きるはず
		robot1.attack("Robot2");
	}

	// 6. 体力が尽きた場合の動作をテストする
	std::cout << "== No Hit Points Test ==" << std::endl;
	robot2.takeDamage(10);   // Robot2 の体力が 0 になる
	robot2.attack("Robot1"); // 体力が尽きているので攻撃できないはず
	robot2.beRepaired(5);    // 体力がないので修理できないはず

	std::cout << std::endl;

	return (0);
}
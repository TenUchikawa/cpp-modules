/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_identify.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 08:15:00 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/03/02 08:15:01 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"
#include <iostream>

int main() {
    Base* ptr = generate();
    std::cout << "Identifying using pointer: ";
    identify(ptr);
    std::cout << "Identifying using reference: ";
    identify(*ptr);
    delete ptr;
    return 0;
}

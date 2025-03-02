/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_serialization.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 08:14:00 by tuchikaw          #+#    #+#             */
/*   Updated: 2025/03/02 08:14:01 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main() {
    Data data;
    data.n = 42;
    data.s = "Hello World";
    
    uintptr_t raw = Serializer::serialize(&data);
    Data* dataPtr = Serializer::deserialize(raw);
    
    std::cout << "Original address: " << &data << std::endl;
    std::cout << "After serialization/deserialization: " << dataPtr << std::endl;
    std::cout << "Data: " << dataPtr->n << ", " << dataPtr->s << std::endl;
    
    return 0;
}

// Copyright (c) 2022 Venika Sem All rights reserved
//
// Created by: Venika Sem
// Created on: Oct 2022
// This program tells user if integer is positive, negative, or zero

#include <cmath>
#include <iostream>

int main() {
    // this function tells user if integer is positive, negative, or zero
    int integer;

    // input
    std::cout << "Enter any integer: ";
    std::cin >> integer;

    // process & output
    if (integer > 0) {
        std::cout << integer << " is a positive number."
        << "" << std::endl;

    } else if (integer < 0) {
        std::cout << integer << " is a negative number."
        << "" << std::endl;

    } else if (integer == 0) {
        std::cout << integer << " is just zero!"
        << "" << std::endl;
    } else {
        std::cout << "No idea!";
    }

    std::cout << "\nDone." << std::endl;
}

// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: Apr 2022
// This program calculates factorial of a number

#include <iostream>
#include <string>

int main() {
    // This function multiplies numbers

    int number;
    int loopCounter = 1;
    std::string numberAsString;
    int answer = 1;

    // Input
    std::cout << "Please enter a positive integer: ";
    std::cin >> numberAsString;

    // Process & Output
    try {
        number = std::stoi(numberAsString);
        if (number < 0) {
            std::cout << number << " is not positive :c" << std::endl;
        } else {
            do {
                answer = answer * loopCounter;
                loopCounter = loopCounter + 1;
            } while (loopCounter <= number);
            std::cout << std::endl;
            std::cout << number << "! = " << answer << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << numberAsString << " is not a number." << std::endl;
    }

    std::cout << "\nDone" << std::endl;
}

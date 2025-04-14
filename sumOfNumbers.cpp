// Copyright 2025 (c) All rights reserved
// Created by: Gustav I
// Created on: April 14, 2025
// This program adds all whole numbers from 0 to the number entered by the user.

#include <iostream>

int main() {
    int userNumber;
    int total = 0;
    int counter = 0;

    // User Input for loop
    std::cout << "Enter a positive whole number: ";
    std::cin >> userNumber;

    // Check for invalid (non-integer) input
    if (std::cin.fail()) {
        std::cout << "Invalid input. Please enter a whole number." << std::endl;
    } else {
        if (userNumber < 0) {
            std::cout << "Invalid input. Number must be 0 /n";
            std::cout << "or greater." << std::endl;
        } else {
            // While loop to add numbers from 0 to userNumber
            while (counter <= userNumber) {
                total += counter;
                counter++;
            }  // Output message
            std::cout << "The sum of all whole numbers up to " << userNumber;
            std::cout << " is: " << total << std::endl;
        }
    }

    return 0;
}

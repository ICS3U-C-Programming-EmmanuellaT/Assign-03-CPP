// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 8th November, 2026
// This program asks the user  for three
// numbers and displays the smallest number and catches errors

#include <iostream>

int main() {
    // declare variables
    int num1, num2, num3;

    // get the user input as integers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;

    // check which number is the smallest and catch
    // errors that may occur during user input
try {
        if (std::cin.fail()) {
            throw std::invalid_argument
            ("Invalid input. Please enter a valid number.");
        }
        // check if the numbers are equal
        if (num1 == num2 && num1 == num3) {
            std::cout << "All three numbers are equal." << std::endl;
        } else if (num1 == num2) {
            std::cout << "The first and second numbers are equal." << std::endl;
        } else if (num1 == num3) {
            std::cout << "The first and third numbers are equal." << std::endl;
        } else if (num2 == num3) {
            std::cout << "The second and third numbers are equal." << std::endl;
        }
        // check which number is the smallest
        if (num1 <= num2 && num1 <= num3) {
            std::cout << num1 << " is the smallest number." << std::endl;
        } else if (num2 <= num1 && num2 <= num3) {
            std::cout << num2 << " is the smallest number." << std::endl;
        } else {
            std::cout << num3 << " is the smallest number." << std::endl;
        }
} catch (const std::invalid_argument& e) {
    std::cout << "userInput: "
              << num1 << ", " << num2 << ", " << num3
              << " - " << e.what() << std::endl;
}
    return 0;
}

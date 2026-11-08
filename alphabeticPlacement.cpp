// Copyright (c) 2026 Emmanuella Taiwo All rights reserved
// Created by: Emmanuella Taiwo
// Date: 7th November, 2026
// This program asks the user for an alphabet letter as a string
// and displays if it is a vowel, a consonant or both and catches errors
// using compound boolean expressions and if statements

#include <iostream>
#include <stdexcept>
#include <string>

int main() {
    // declare variables
    std::string userInput;
    std::string vowels = "aeiouAEIOU";
    std::string consonants = "bcdfghjklmnpqrstvwxzBCDFGHJKLMNPQRSTVWXZ";
    std::string both = "Yy";

    // get the user input as a string
    std::cout << "Enter an alphabet letter: ";
    std::cin >> userInput;

    // catch errors that may occur during user input
    try {
        if (userInput != std::string(1, userInput[0])) {
            throw std::invalid_argument
            ("Invalid input. Please enter a valid alphabet letter.");
        }

        // check if user input is a vowel, consonant or both
        if (vowels.find(userInput) != std::string::npos) {
            std::cout << userInput << " is a vowel." << std::endl;
        }
        // check if user input is a consonant
        if (consonants.find(userInput) != std::string::npos) {
            std::cout << userInput << " is a consonant." << std::endl;
        }
        // check if user input is both a vowel and a consonant
        if (both.find(userInput) != std::string::npos) {
            std::cout << userInput <<
            " is both a vowel and a consonant." << std::endl;
        }
    }
    catch (const std::invalid_argument& e) {
        std::cout << "userInput: "
         << userInput << " - " << e.what() << std::endl;
    }
    return 0;
}

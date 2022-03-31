// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: Mar 29, 2022
// This program asks the user to  guess a number. It then generates a
// random number. If the random number is equal to the number guess, you win.
// If not, you lose.

#include <iostream>
#include <random>

int main() {
    // Generates random number
    int randomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0,100]
    randomNumber = idist(rgen);
    // std::cout << randomNumber << std::endl;
    // declare variable
    int numberGuess;

    // get number guessed from user
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> numberGuess;
    std::cout << "" << std::endl;

    // check if numberGuess is the same as randomNumber
    if (numberGuess == randomNumber) {
        // Display results
        std::cout << "Your guess is correct";
    } else {
        std::cout << "Incorrect, the correct number is " \
            << randomNumber << "\n";
    }
}

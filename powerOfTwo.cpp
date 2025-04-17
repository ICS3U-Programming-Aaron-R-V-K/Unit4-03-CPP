// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: April 16, 2025
// Is a for loop program
// It calculates the power of two for each number starting
// from 0 to the user number

#include <cmath>
#include <iostream>
#include <string>

int main() {
    // Get user input as string
    std::string userNumStr;
    std::cout << "Enter a whole number: ";
    std::cin >> userNumStr;

    // Set the variables
    float numFloat;
    int number;

    try {
        // Convert the string to a float and an integer
        numFloat = std::stof(userNumStr);
        number = std::stoi(userNumStr);

        // Compare the float and integer to chef for decimals
        if (numFloat != number) {
            std::cout << "\nYour num has decimals, enter a whole number."
            << std::endl;

        // Validates that the num is > than 0
        } else if (number < 0) {
            std::cout << "\nInvalid input. Enter a positive whole number."
            << std::endl;

        } else {
            // for loop, sets the counter to 0
            // the range to user num and adds one each time it runs
            for (int counter = 0; counter <= number; counter++) {
                // Prints and does the calculation for each individual
                // number each time it runs, until the user num
                std::cout << counter << "^2 = " << std::pow(counter, 2)
                << std::endl;
            }
        }
    // catch statement for invalid inputs
    } catch (...) {
        std::cout << "\nInvalid input. Please enter a whole number."
        << std::endl;
    }

    std::cout << "\nThanks for playing." << std::endl;
    return 0;
}

// Copyright [2022] <Mr. Kent>"  [legal/copyright]
//
// Date : 10 - 17 - 22
// This program checks if a user is eligible to date someone's grandkid.

#include <iostream>
#include <string>

int main() {
    // input
    std::string userAgeAsStr;
    int userAgeAsInt;
    std::cout << "what is your age?: ";
    std::cin >> userAgeAsStr;
    // process & output.
    try {
        userAgeAsInt = std::stoi(userAgeAsStr);
        if (userAgeAsInt >= 25 || userAgeAsInt < 40) {
        std::cout << "yes";
        } else {
            std::cout << "You are not a suitable partner" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "You have entered an invalid input, ";
        std::cout << "Enter your age";
    }
}

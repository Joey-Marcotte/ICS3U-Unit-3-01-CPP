// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: Sept 2019
// This program calculates adds two numbers together
// with user input

#include <iostream>

int main() {
    // this function adds two numbers together with user inputs
    int firstNumber;
    int secondNumber;
    int answer;


    // input
    std::cout << "Enter value of first_number: ";
    std::cin >> firstNumber;
    std::cout << "Enter value of second_number: ";
    std::cin >> secondNumber;

    // process
    answer = firstNumber + secondNumber;


    // output
    std::cout << "" << std::endl;
    std::cout << firstNumber << "+" << secondNumber << "=" << answer <<
    std::endl;
}

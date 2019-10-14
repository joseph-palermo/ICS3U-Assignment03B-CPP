// Copyright (c) 2019 Joseph Palermo All rights reserved
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program calculates the roots of a quadratic function

#include <iostream>
#include <cmath>

int main() {
    // This function calculates the roots of a quadratic function

    // variables
    float a;
    float b;
    float c; 
    float d;
    float x1;
    float x2;
    float x3;

    // input
    std::cout << "Enter the value of a: " << std::endl;
    std::cin >> a;
    std::cout << "" << std::endl;
    std::cout << "Enter the value of b: " << std::endl;
    std::cin >> b;
    std::cout << "" << std::endl;
    std::cout << "Enter the value of c: " << std::endl;
    std::cin >> c;
    std::cin >> a >> b >> c;
    d = b*b - 4*a*c;

    // process
    if (d > 0) {
        std::cin >> x1 = (-b + sqrt(d)) / (2*a);
        std::cin >> x2 = (-b - sqrt(d)) / (2*a);
        std::cout << "The roots are: " << endl;
        std::cout << "x1 = " << x1 << endl; 
        std::cout << "x2 = " << x2 << endl;
    }

    else if (d = 0) {
        std::cin >> x3 = (-b) / (2*a);
        std::cout << "The root is " << x1 << std::endl;
    }

    else if (d < 0) {
        std::cout << "There are no roots" << std::endl;
    }

    else {
        std::cout << "Please enter numerical values" << std::endl;
    }
}



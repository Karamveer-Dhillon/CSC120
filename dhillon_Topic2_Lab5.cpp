/*
Author: Karamveer Dhillon
File Name: dhillon_Topic2_Lab5.cpp
Date: Feb 24 2025
Description: This program calculates the average of 1, 5, and 7 and
the modulus of 1 % 5, 1 % 7, and 5 % 7.
*/

// Imported the required libraries.
#include <iostream>
using namespace std;

// declared the main function.
int main()
{
    // Declared the integer variables to store the numbers 1,5, and 7.
    int firstNumber = 1;
    int secondNumber = 5;
    int thirdNumber = 7;

    // Calculated the average of the three numbers and stored it in a variable "average".
    double average = (firstNumber + secondNumber + thirdNumber) / 3.0;
    // calculated the modulus of 1 and 5 and stored it in "mod" and displayed it using cout function.
    double mod = firstNumber % secondNumber;
    cout << "The modulus of 1 and 5 is "<< mod << endl;
    // calculated the modulus of 1 and 7 and stored it in "mod" and displayed it using cout function.
    mod = firstNumber % thirdNumber;
    cout <<"The modulus of 1 and 7 is " << mod << endl;
    // calculated the modulus of 5 and 7 and stored it in "mod" and displayed it using cout function.
    mod = secondNumber % thirdNumber;
    cout <<"The modulus of 5 and 7 is "<< mod << endl;
    // displayed the value of "average" using cout function.
    cout << "The average of 1,5 and 7 is "<< average << endl;
    // Returned 0 to end the program.
    return 0;
}
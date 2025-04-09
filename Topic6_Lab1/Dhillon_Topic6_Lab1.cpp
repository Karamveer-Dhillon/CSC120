/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic6_Lab1.cpp
Date: 9 April 2025
Description: This program uses functions and calculates the sum of all numbers between two integers.
*/



#include <iostream>
#include <string>

using namespace std;

// Created a function to print the input.
void prompt(string message) {
  cout << message << endl;
};
// Created a function to take an integer input.
int getInt(string instruction) {
    prompt(instruction);
    int num;
    cin >> num;
    return num;
};
// Created a function to calculate the sum of all numbers between two integers.
int sumNumbers(int start, int end) {
    int a = 0;
    for (int i = start; i <= end; i++) {
        a += i;
    }
    return a;
};

int main() {
  // Called getInt function to get value of a.
  int a = getInt("Please enter the first number");
  //Called getInt function to get value of b.
  int b = getInt("Please enter the second number");

  // Called sumNumbers function to get sum of all numbers between a and b.
  int result = sumNumbers(a,b);
  // Displayed the result.
  cout << "Sum of numbers from " << a << " to " << b << " is: " << result << endl;

  return 0;
}

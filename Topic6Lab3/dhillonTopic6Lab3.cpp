/*
  Author: Karamveer Dhillon
  Date: 15 April 2025
  Filename:dhillonTopic6Lab3.cpp
  Description: This program demonstrates the use of functions in C++.
  It includes functions to calculate the average of two integers,
  check if a number is odd,and check if two or more numbers are the same.
*/
// Include necessary libraries.
#include <iostream>
using namespace std;

// Function prototypes or declarations.
double avg(int, int);
void avg(int, int, double&);
bool isOdd(int);
bool isSame(int, int, int, int);
bool isSame(int, int);

int main()
{
  int sum = 42;
  int count = 11;

  // call the functions
  // Calling the double avg function.
  double average = avg(sum, count);
  cout << "The average is: " << average << endl;

  // Calling the void average function.
  sum = 43;
  count = 12;

  avg(sum, count, average);
  cout << "The new average is: " << average << endl;

  // Calling the isOdd function.
  int value = 42;
  cout << "The value " << value << " is odd: "
  << (isOdd(value) ? "True" : "False") << endl;

  // Calling the isSame functions.
  int firstNum = 10;
  int secondNum = 13;

  cout
  << "The values of firstNum(" << firstNum << ") and secondNum("
  << secondNum << ") are same: "
  << (isSame(firstNum, secondNum) ? "True" : "False") << endl;

  // Calling the isSame function with four parameters.
  int thirdNum = 15;
  int compareNum = 17;

  cout
  << "The compareNum(" << compareNum << ") is the same as firstNum("
  << firstNum << "), secondNum(" << secondNum
  << "), OR thirdNum(" << thirdNum
  << "): " << (isSame(firstNum, secondNum, thirdNum, compareNum) ? "True" : "False")
  << endl;


  // return 0 to main function.
  return 0;
}
// Function definitions

// Define the double avg function.
double avg(int sum, int count) {
  return static_cast<double>(sum) / count;
}

// Define the void avg function.
void avg(int sum, int count, double& average) {
  average = static_cast<double>(sum) / count;
}

// Define the bool isOdd function.
bool isOdd(int value) {
  return value % 2 != 0;
}

// Define the bool isSame function with four parameters.
bool isSame(int firstNum, int secondNum, int thirdNum, int compareNum) {
  return
     isSame(firstNum, compareNum)
  || isSame(secondNum, compareNum)
  || isSame(thirdNum, compareNum);
}

// Define the bool isSame function.
bool isSame(int number, int compareNum) {
  return number == compareNum;
}

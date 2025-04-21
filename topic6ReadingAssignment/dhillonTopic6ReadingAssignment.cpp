/*
 *Author: Karamveer Dhillon
 *Date: 20 April 2025
 *Filename: dhillonTopic6ReadingAssignment.cpp
 *Description: This program demonstrates various function implementations in C++,
 *             including function overloading, pass by value and reference, I/O operations,
 *             and basic mathematical calculations.
 *             It allows user input of a number,
 *             performs operations like doubling the number, displays messages,
 *             and calculates the area of a circle with a random radius.
*/

// Imported required libraries
#include <iostream>  // For input/output operations
#include <string>    // For string
#include <ctime>     // For time functions to seed random number generator

// Function Prototypes

// Prints the number to the console
void printNumber(int number);

// Returns the double of the number sent to the function (pass by value)
double doubleNumber(double number);

// Doubles the input number (pass by reference)
void doubleNumber(int& number);

// Prints the message to the console (standard output)
void printMessage(std::string message);

// Prints the message to the specified output stream
void printMessage(std::string message, std::ostream& os);

// Gets an integer from the user via console input
int getIntValue();

// Calculates a random number between min and max
int randBetween(int MIN, int MAX);

// Returns the area of a circle given its radius
double circleArea(double RADIUS);

int main() {
  // Seed the random number generator with current time to ensure different results each run
  srand(time(0));

  // Get a number from user
  int number = getIntValue();

  // Display the original number
  std::cout << "The number is: ";
  printNumber(number);

  // Calculate and display the double of the number (using the double version)
  std::cout << "The double of " << number << " is: "
  << doubleNumber(static_cast<double>(number)) << std::endl;

  // Double the number (using reference parameter)
  doubleNumber(number);
  std::cout << "The number is now: " << number << std::endl;

  // Demonstrate message printing to standard output
  printMessage("Hello World!");

  // Demonstrate message printing with an explicit output stream
  printMessage("Goodbye World!", std::cout);

  // Generate random radius and calculate circle area
  int radius = randBetween(1, 10);
  std::cout << "The area of a circle with radius " << radius << "cm is: " << circleArea(radius) << "cm²" << std::endl;

  return 0;
}

// Function definitions

// Outputs the provided number to the console
void printNumber(int const NUMBER) {
  std::cout << NUMBER << std::endl;
}

// Returns twice the value of the input number (for double type)
double doubleNumber(const double NUMBER) {
  return NUMBER * 2;
}

// Multiplies the provided number by 2 in-place (modifies the original variable)
void doubleNumber(int& number) {
  number *= 2;
}

// Displays a message to the standard output with a prefix
void printMessage(const std::string MESSAGE) {
  std::cout << "The message is: " << MESSAGE << std::endl;
}

// Displays a message to the specified output stream with a prefix
void printMessage(const std::string MESSAGE, std::ostream& os) {
  os << "The message is: " << MESSAGE << std::endl;
}

// Prompts for and retrieves an integer value from user input
int getIntValue() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;
  // Clear the input buffer to prevent issues with future input operations
  std::cin.ignore();
  return number;
}

// Generates a random integer between min and max (inclusive)
int randBetween(const int MIN, const int MAX) {
  return rand() % (MAX - MIN + 1) + MIN;
}

// Calculates the area of a circle using the formula: A = π × r²
double circleArea(const double RADIUS) {
  constexpr double PI = 3.14;  // PI constant for circle calculations
  return PI * (RADIUS * RADIUS);
}
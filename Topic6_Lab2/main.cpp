/*
Author: Karamveer Dhillon
Date: April 14 2025
File: dhillonTopic6Lab2.cpp
Description: This program generates a random number between 1 and 1000,
then generates 9 more random numbers in the same range.
It finds the maximum and minimum of all the numbers generated using function overloading.
*/

// importing libraries
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
// Function prototypes
// findMax function to find the maximum of two integers and two doubles
int findMax(int,int);
double findMax(double,double);
// findMin function to find the minimum of two integers and two doubles
int findMin(int, int);
double findMIN(int,int);
// randomInt function to generate a random integer between min and max
int randomInt(int, int);

int main()
{
  // Used srand to seed the random number generator with the current time.
  srand(time(0));
  // Generate a random number between 1 and 1000
  const int RANDOMNUM = randomInt(1, 1000);
  // Display the random number
  cout << "The original random number: " << RANDOMNUM << endl;
  // Assign the original random number to max and min
  int max = RANDOMNUM;
  int min = RANDOMNUM;

  cout << "The new random numbers are: ";
  // Generate 9 more random numbers and find the max and min
  for (int i = 0; i < 9; i++) {
    int newRandomNum = randomInt(1, 1000);
    cout << newRandomNum << " ";
    // Called findMax and findMin functions to find the max and min.
    max = findMax(max, newRandomNum);
    min = findMin(min, newRandomNum);
  }
  // Display the max and min
  cout << endl;
  cout << "Max: " << max << endl;
  cout << "Min: " << min << endl;

  // return 0 to indicate successful completion.
  return 0;
}
// Function definitions
int findMax(int a, int b){
  if (a > b) return a;
  return b;
}

double findMax(double a, double b){
  if (a > b) return a;
  return b;
}

int findMin(int a, int b) {
  if (a < b) return a;
  return b;
}

double findMin(double a, double b){
  if (a < b) return a;
  return b;
}

int randomInt(int min, int max) {
  return rand() % (max - min + 1) + min;
}

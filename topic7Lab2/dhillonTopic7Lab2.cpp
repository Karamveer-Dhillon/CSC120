/*
* Author: Karamveer Dhillon
 * Date: April 28 2025
 * Filename: dhillon_Topic7_Lab2.cpp
 * Description: 
 */

#include <iostream>
#include <cstdlib>

using namespace std;
// Function to get a random  number between max and min.
int randBetween(int MAX, int MIN)
{
  return (rand() % (MAX - MIN + 1)) + MIN;
}
// Function to fill random values to the array.
void randArray(int array[],int size) {

  for (int i = 0; i < size; i++)
  {
    array[i] = randBetween(100, -100);
  }
}
// Function to print the array
void printArray(int array[],int size) {
  for (int i = 0; i < size; i++)
  {
    cout << array[i];
    cout << "\n";
  }
}
int main()
{
  //seeded the rand function with time
  srand(time(0));
  //Declared the array
  const int ARRAYSIZE = 10;
  int randNums[ARRAYSIZE];
 //called the functions
  randArray(randNums, ARRAYSIZE);
  printArray(randNums, ARRAYSIZE);


  return 0;
}
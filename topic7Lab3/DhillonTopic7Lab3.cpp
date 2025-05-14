/*
 * Author: Karamveer Dhillon
 * Date: 2025-05-05
 * Filename: DhillonTopic7Lab3.cpp
 * Description: This program reads values from a file and insert them into an array.
 * Then A function is used to find the smallest value in the array.
 */

#include <iostream>
#include <fstream>
using namespace std;
// The function to find the minimum value
double findMin(const double array[],int arraySize)
{
  double min = array[0];
  for (int i = 0; i < arraySize; i++)
  {
    if (array[i] < min)
    {
      min = array[i];
    }
  }
  return min;
}

int main()
{
  // open the file using ifstream
  ifstream readFile("/Users/karamveer/Downloads/doubles.txt");
  // create an array of doubles
  constexpr int SIZE = 30;
  double nums[SIZE];

  //Assign 99,999 to each element of the array.
  for (int i = 0; i < SIZE; i++)
  {
    nums[i] = 99999;
  }
  // Displaying an error if the file does not open.
  while (!readFile.is_open())
  {
    cout << "File not found" << endl;
  }
  // Read values from the file and assign to the array.
  for (int i = 0; i < SIZE; i++)
  {
    readFile >> nums[i];
  }
  // close the file
  readFile.close();
  // called the findMin function to find the smallest value
  const int smallestValue = findMin(nums,SIZE);
  cout << "The smallest value is:"<< smallestValue << endl;
  return 0;
}
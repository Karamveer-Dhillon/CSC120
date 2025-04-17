/*
 Author: Karamveer Dhillon
 Date: 15 April 2025
 Filename:dhillonTopic6Lab3.cpp
 Description: This program demonstrates the use of functions in C++. It includes
              functions to calculate the average of two integers, check if a number is odd,
              and check if two or more numbers are the same.
*/
#include <iostream>
using namespace std;

// Function prototypes
double avg(int, int);
void avg(int, int,double&);
bool isOdd(int);
bool isSame(int, int, int, int);
bool isSame(int,int);

int main()
{
 int sum = 42;
 int count = 11;

 // call the functions
 // Calling the double avg function.
 double average = avg(sum,count);
 cout << "The average is: " << average << endl;

 // Calling the void average function.
 sum = 43;
 count = 12;

 avg(sum, count, average);
 cout << "The new average is: " << average << endl;

 // Calling the isOdd function.
 int value = 42;
 cout << "The value " << value << " is odd: "
 << (isOdd(value)? "True": "False") << endl;

 // Calling the isSame functions.
 int firstNum = 10;
 int secondNum = 13;

 cout << "The values of firstNum("<< firstNum
 <<") and secondNum("<< secondNum<<") are same: "
 << (isSame(firstNum,secondNum)? "True" : "False") << endl;

 int thirdNum = 15;
 int compareNum = 13;

 cout <<"The compareNum("<<compareNum<<") is the same as firstNum("<<
  firstNum<<"), secondNum("<<secondNum<<"), OR thirdNum("<<thirdNum<<"): "
 << (isSame(firstNum,secondNum,thirdNum,compareNum)? "True" : "False");

 return 0;
}
// Function definitions
double avg(int sum, int count) {
 return static_cast<double>(sum) / count;
}

void avg(int sum, int count, double& average) {
 average = static_cast<double>(sum)/count;
}

bool isOdd(int value) {
  return value % 2 != 0;
}

bool isSame(int firstNum, int secondNum, int thirdNum, int compareNum ) {
 if (isSame(firstNum, compareNum)) {
  return isSame(firstNum,compareNum);
 }
 else if (isSame(secondNum, compareNum)) {
  return isSame(secondNum,compareNum);
 }
 else if (isSame(thirdNum, compareNum)) {
  return isSame(thirdNum,compareNum);
 }
 else return false;
}

bool isSame(int number, int compareNum) {
 return number == compareNum;
}




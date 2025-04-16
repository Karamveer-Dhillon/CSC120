/*
 Author: Karamveer Dhillon
 Date: 15 April 2025
 Filename:dhillonTopic6Lab3.cpp
 Description:
*/
#include <iostream>
using namespace std;

// Function prototypes
double avg(int, int);
void avg(int, int,double&);
bool isOdd(int);
bool isSame(int, int, int, int);
// bool isSame(int,int);

int main() {
 int sum = 33;
 int count = 10;
 double average = avg(sum, count);
 cout << "The average is " << average << endl;

 cout << isOdd(32);
}

// Function definitions
double avg(int sum, int count) {
 return static_cast<double>(sum) / count;
}
void avg(int sum, int count, double &average) {
 average = static_cast<double>(sum)/count;
}
bool isOdd(int x) {
  if (x % 2 != 0) {
   return true;
  }
  else {
  return false;
  }
}



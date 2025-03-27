/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic5_Reading_Assignment.cpp
Date: 27 March 2025
Description: This program calculates the total number of students and number of books bought by the students.
The program will also calculate the average number of books bought by each student.
*/
#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
  const int MINBOOKS = 0;
  const int MAXBOOKS = 50;
  const int EXITCODE = -999;

  int numBooks;
  double totalBooks = 0;
  int numStudents = 0;

  cout << "Welcome to the Book Store!!\n\n";
  cout << "This program calculates the total number of students and number of books bought by the students.\n"
          "The program will also calculate the average number of books bought by each student.\n\n";
  cout << "Users have to enter the number of books bought by each student.\n"
          "Only numbers between "<< MINBOOKS << " and " << MAXBOOKS << " are valid.\n"
          "The program will stop when the user enters " << EXITCODE <<".\n\n";

  do {
    cout << "PLease enter the number of books bought by the student: ";
    cin >> numBooks;

    while (cin.fail()){
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input!! Please enter a number between" << MINBOOKS << " and " << MAXBOOKS << ": ";
      cin >> numBooks;
    }
    while ((numBooks < MINBOOKS || numBooks > MAXBOOKS) && numBooks != EXITCODE) {
      cout << "Invalid input!! Please enter a number between" << MINBOOKS << " and " << MAXBOOKS << ": ";
      cin >> numBooks;
      while (cin.fail()){

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!! Please enter a number between" << MINBOOKS << " and " << MAXBOOKS << ": ";
        cin >> numBooks;
      }
    }
    if (numBooks != EXITCODE){
      totalBooks += numBooks;
      numStudents++;
    }
  } while (numBooks != EXITCODE);
  double average = totalBooks / numStudents;

  cout << "The total number of students is " << numStudents << endl;
  cout << "The total number of books bought by all students is " << totalBooks << endl;
  cout << "The average of total numbers is " << fixed << setprecision(2) << average << endl;

  return 0;
  }
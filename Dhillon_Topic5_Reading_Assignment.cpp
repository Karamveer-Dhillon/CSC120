/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic5_Reading_Assignment.cpp
Date: 27 March 2025
Description: This program calculates the total number of students and number of
books bought by the students. The program will also calculate the average number
of books bought by each student.
*/
#include <iomanip>
#include <iostream>
//included limits library to check for invalid input using cin.ignore.
#include <limits>

using namespace std;

int main() {
  // Declared Constants
  const int MINBOOKS = 0;
  const int MAXBOOKS = 50;
  const int EXITCODE = -999;

  // Declared Variables
  int numBooks;
  double totalBooks = 0;
  int numStudents = 0;

  // Displayed welcome message and instructions.
  cout << "Welcome to the Book Store!!\n\n";
  cout << "This program calculates the total number of students and number of "
          "books bought by the students.\n"
          "The program will also calculate the average number of books bought "
          "by each student.\n\n";
  cout << "Users have to enter the number of books bought by each student.\n"
          "Only numbers between "
       << MINBOOKS << " and " << MAXBOOKS
       << " are valid.\n"
          "The program will stop when the user enters "
       << EXITCODE << ".\n\n";

  // Prompted user for the number of books bought by each student.
  do {
    cout << "Please enter the number of books bought by the student: ";
    cin >> numBooks;

    // Checked for invalid input. Used cin.fail() to check if the input is a
    // number. If the input is not a number, it will clear the error and ignore
    // the invalid input. Used cin.peek() to give error if the input is float value.
    while (cin.fail()|| cin.peek() != '\n') {
      cin.clear();
      //This prevents infinite loops if a string value or a value too large
      //for int datatype is entered in the cin.
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input!! \nPlease enter a number between " << MINBOOKS
           << " and " << MAXBOOKS << ": ";
      cin >> numBooks;
    }
    // Checked if the input is between the minimum and maximum number of books.
    while (((numBooks < MINBOOKS) || (numBooks > MAXBOOKS)) &&
           (numBooks != EXITCODE)) {
      cout << "Invalid input!! \nPlease enter a number between " << MINBOOKS
           << " and " << MAXBOOKS << ": ";
      cin >> numBooks;
      // Checked for invalid input. used cin.fail() to check if the input is a
      // number.
      while (cin.fail()|| cin.peek() != '\n') {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!! \nPlease enter a number between " << MINBOOKS
             << " and " << MAXBOOKS << ": ";
        cin >> numBooks;
      }
    }
    // If the input is not equal to the exit code, it will add the number of
    // books to the total number of books and increment the number of students.
    if (numBooks != EXITCODE) {
      totalBooks += numBooks;
      numStudents++;
    }
    // If the input is equal to the exit code, it will break the loop.
  } while (numBooks != EXITCODE);

  // Checked if the number of students is 0. If it is, it will display a message
  // and exit the program.
  if (numStudents == 0) {
    cout << "No students entered. Exiting the program." << endl;
    return 1;
  } else {
    // Calculated the average number of books bought by each student.
    const double average = totalBooks / numStudents;

    // Displayed the total number of students, total number of books bought by
    // all students, and the average number of books bought by each student.
    cout << "\nSales Report\n";
    cout << "The total number of students is " << numStudents << ".\n";
    cout << "The total number of books bought by all students is " << totalBooks
         << ".\n";
         //used setprecision to round the average to 2 decimal points.
    cout << "The average of total numbers is " << fixed << setprecision(2)
         << average << "." << endl;
  }
  // returned 0 to indicate successful completion of the program.
  return 0;
}
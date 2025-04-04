/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic4_Quiz.cpp
Date: 12 March 2025
Description: This program takes the number score from the user and calculates the letter grade and quality point based on the score.
*/

// Imported the required libraries.
#include <iostream>

// used namespace std to avoid writing std:: before cout and cin.
using namespace std;

// declared the main function.
int main() {
	// declared the integer variable to store the score.
	int marks;
	
	// declared the character variable to store the letter grade.
	char grade;
	
	// declared the string variable to store the quality point.
	string qualityPoint;
	
	// displayed the message to the user to enter the score and stored the input in "marks".
	cout << "This program calculates the letter grade and quality point based on the score." << endl;
	cout << "" << endl;
	cout << "Please enter the score in the range of 0 to 100: " << endl ;
	
	// stored the input in "marks".
	cin >> marks;

	// checked if the score is in the range of 0 to 100.
	if (marks >= 0 && marks <= 100) {
		// checked the score and assigned the letter grade based on the score.
		if (marks >= 90) {
			grade = 'A';
			cout << "The letter grade is " << grade << endl;
		}
		else if (marks >= 80 && marks < 90) {
			grade = 'B';
			cout << "The letter grade is " << grade << endl;
		}
		else if (marks >= 70 && marks < 80) {
			grade = 'C';
			cout << "The letter grade is " << grade << endl;
		}
		else if (marks >= 60 && marks < 70) {
			grade = 'D';
			cout << "The letter grade is " << grade << endl;
		}
		else {
			grade = 'F';
			cout << "The letter grade is " << grade << endl;
		}
		
		// assigned the quality point based on the letter grade using switch function.
		switch (grade) {
		case 'A':
			qualityPoint = "4";
			cout << "The quality point is " << qualityPoint << endl;
			break;
		case 'B':
			qualityPoint = "3";
			cout << "The quality point is " << qualityPoint << endl;
			break;
		case 'C':
			qualityPoint = "2";
			cout << "The quality point is " << qualityPoint << endl;
			break;
		case 'D':
			qualityPoint = "1";
			cout << "The quality point is " << qualityPoint << endl;
			break;
		case 'F':
			qualityPoint = "none";
			cout << "The quality point is " << qualityPoint << endl;
			break;
		}
		
	}
	// if the score is not in the range of 0 to 100 then displayed the error message
	// and asked the user to enter the score again.
	else {
		cout << "The score is invalid." << endl;
		cout << "Please enter the score in the range of 0 to 100." << endl;
		cin >> marks;
		
		// checked the score and assigned the letter grade based on the score.
		if (marks >= 0 && marks <= 100) {
			if (marks >= 90) {
				grade = 'A';
				cout << "The letter grade is " << grade << endl;
			}
			else if (marks >= 80 && marks < 90) {
				grade = 'B';
				cout << "The letter grade is " << grade << endl;
			}
			else if (marks >= 70 && marks < 80) {
				grade = 'C';
				cout << "The letter grade is " << grade << endl;
			}
			else if (marks >= 60 && marks < 70) {
				grade = 'D';
				cout << "The letter grade is " << grade << endl;
			}
			else {
				grade = 'F';
				cout << "The letter grade is " << grade << endl;
			}
			// assigned the quality point based on the letter grade using switch function.
			switch (grade) {
			case 'A':
				qualityPoint = "4";
				cout << "The quality point is " << qualityPoint << endl;
				break;
			case 'B':
				qualityPoint = "3";
				cout << "The quality point is " << qualityPoint << endl;
				break;
			case 'C':
				qualityPoint = "2";
				cout << "The quality point is " << qualityPoint << endl;
				break;
			case 'D':
				qualityPoint = "1";
				cout << "The quality point is " << qualityPoint << endl;
				break;
			case 'F':
				qualityPoint = "none";
				cout << "The quality point is " << qualityPoint << endl;
				break;
				}
		   }
		   // if the score is not in the range of 0 to 100 then displayed the error message.
		else
		{
			cout << "The score is invalid." << endl;
		}
	} 
	// Returned 0 to end the program.
	return 0;
}

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
	int Marks;
    
    // declared the character variable to store the letter grade.
	char Grade;
    
    // declared the string variable to store the quality point.
	string Quality_Point;
    
    // displayed the message to the user to enter the score and stored the input in "Marks".
	cout << "This program calculates the letter grade and quality point based on the score." << endl;
    cout << "" << endl;
    cout << "Please enter the score in the range of 0 to 100: " << endl ;
    
    // stored the input in "Marks".
	cin >> Marks;

    // checked if the score is in the range of 0 to 100.
	if (Marks >=0 && Marks <=100) {
        // checked the score and assigned the letter grade based on the score.
		if ( Marks >=90) {
			Grade = 'A';
			cout << "The letter grade is " << Grade << endl;
		}
		else if (Marks >=80 && Marks <90) {
			Grade = 'B';
			cout << "The letter grade is " << Grade << endl;
		}
		else if (Marks >=70 && Marks <80) {
			Grade = 'C';
			cout << "The letter grade is " << Grade << endl;
		}
		else if (Marks >=60 && Marks <70) {
			Grade = 'D';
			cout << "The letter grade is " << Grade << endl;
		}
		else {
			Grade = 'F';
			cout << "The letter grade is " << Grade << endl;
		}
        
        // assigned the quality point based on the letter grade using switch function.
		switch (Grade) {
		case 'A':
			Quality_Point = "4";
			cout << "The quality point is " << Quality_Point << endl;
			break;
		case 'B':
			Quality_Point = "3";
			cout << "The quality point is " << Quality_Point << endl;
			break;
		case 'C':
			Quality_Point = "2";
			cout << "The quality point is " << Quality_Point << endl;
			break;
		case 'D':
			Quality_Point = "1";
			cout << "The quality point is " << Quality_Point << endl;
			break;
		case 'F':
			Quality_Point = "none";
			cout << "The quality point is " << Quality_Point << endl;
			break;
		}
		
	}
    // if the score is not in the range of 0 to 100 then displayed the error message
    // and asked the user to enter the score again.
	else {
		cout << "The score is invalid." << endl;
		cout << "Please enter the score in the range of 0 to 100." << endl;
		cin >> Marks;
        
        // checked the score and assigned the letter grade based on the score.
		if (Marks >=0 && Marks <=100) {
			if ( Marks >=90) {
				Grade = 'A';
				cout << "The letter grade is " << Grade << endl;
			}
			else if (Marks >=80 && Marks <90) {
				Grade = 'B';
				cout << "The letter grade is " << Grade << endl;
			}
			else if (Marks >=70 && Marks <80) {
				Grade = 'C';
				cout << "The letter grade is " << Grade << endl;
			}
			else if (Marks >=60 && Marks <70) {
				Grade = 'D';
				cout << "The letter grade is " << Grade << endl;
			}
			else {
				Grade = 'F';
				cout << "The letter grade is " << Grade << endl;
			}
            // assigned the quality point based on the letter grade using switch function.
			switch (Grade) {
			case 'A':
				Quality_Point = "4";
				cout << "The quality point is " << Quality_Point << endl;
				break;
			case 'B':
				Quality_Point = "3";
				cout << "The quality point is " << Quality_Point << endl;
				break;
			case 'C':
				Quality_Point = "2";
				cout << "The quality point is " << Quality_Point << endl;
				break;
			case 'D':
				Quality_Point = "1";
				cout << "The quality point is " << Quality_Point << endl;
				break;
			case 'F':
				Quality_Point = "none";
				cout << "The quality point is " << Quality_Point << endl;
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

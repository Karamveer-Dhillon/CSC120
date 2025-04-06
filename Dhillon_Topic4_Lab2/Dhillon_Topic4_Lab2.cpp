/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic4_Lab2.cpp
Date: 16 March 2025
Description: This program asks the user to select their favorite pet from a list. A message is displayed based on the user's selection using a switch statement.
*/
// Imported necessary libraries
#include <iostream>
#include <cctype> // for toupper
using namespace std;

int main()
{
    // declare a variable to hold user input
    char userInput;

    // ask the user to select their favorite pet
    cout << "Please select your favorite pet from the list below:" << endl;
    cout << "" << endl;
    cout << "enter \"A\" for Cat" << endl;
    cout << "enter \"B\" for Dog" << endl;
    cout << "enter \"C\" for Turtle" << endl;
    cout << "enter \"D\" for Fish" << endl;
    cout << "enter \"E\" for Mouse" << endl;
    cout << "enter \"F\" for Snake" << endl;
    cout << "enter \"G\" for Other" << endl;
    // get user input
    cin >> userInput;

    // convert user input to uppercase to allow user to enter lowercase or uppercase letters
    userInput = toupper(userInput);

    // use a switch statement to display a message based on user input
    switch (userInput)
    {
    case 'A':
        cout << "You like cats!" << endl;
        break;
    case 'B':
        cout << "You like dogs!" << endl;
        break;
    case 'C':
        cout << "You like turtles!" << endl;
        break;
    case 'D':
        cout << "You like fishes!" << endl;
        break;
    case 'E':
        cout << "You like mice!" << endl;
        break;
    case 'F':
        cout << "Really? You like snakes?!" << endl;
        break;
    case 'G':
        cout << "You like some other animal" << endl;
        break;
    default:
        cout << "Invalid selection" << endl;
        break;
    }
    // return 0 to indicate successful completion of the program
    return 0;
}
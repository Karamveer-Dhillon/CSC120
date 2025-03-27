/*
Author: Karamveer Dhillon
File Name: Dhillon_Topic5_Lab1.cpp
Date: 24 March 2025
Description: This program is a number guessing game where the user has to guess a randomly generated secret number between 1 and 100.
The program provides feedback if the guessed number is too high or too low, and it keeps track of the number of attempts made by the user.
Once the correct number is guessed, the program congratulates the user and displays the number of tries taken.
*/

#include <iostream>
#include <ctime>
#include <string>
#include <limits>

using namespace std;

int main() {
// used srand(time(0)) to generate a random number.
srand(time(0));
const int SECRET_NUMBER = rand() % 100 + 1;


// variable to keep track of the number of tries.
int number_Tries = 0;

// variable to store the user's name and the guessed number.
string name;
int user_Number;
// Displaying the welcome message and instructions to the user.
cout << "----------------------------------------\n";
cout << "Welcome to the Number Guessing Game.\n";
cout << "The computer has selected a secret number between 1 and 100.\n";
cout << "Your task is to guess the secret number.\n";
cout << "----------------------------------------\n";
cout << "Please enter your name.\n";
// Taking the user's name as input.
getline(cin,name);
cout << "Hello " << name << ".\n";
cout << "Let's start the game.\n";
cout << "----------------------------------------\n";

// Prompting the user to enter a number within the specified range.
do {
    // Constants for the range of numbers.
    const int MIN_NUMBER = 1;
    const int MAX_NUMBER = 100;
    cout << "Please enter a number between "<< MIN_NUMBER << " and " << MAX_NUMBER<<".\n";
    cin >> user_Number;

    //used cin.fail() to check if the input is a number.
    // If the input is not a number, clear the error state and ignore the invalid input.
    while (cin.fail()){
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input!! Please enter a valid number between " << MIN_NUMBER << " and " << MAX_NUMBER << ".\n";
        cin >> user_Number;
    }

    // Check if the number is within the valid range.
    // If the number is out of range, prompt the user to enter a valid number.
    while(user_Number < MIN_NUMBER || user_Number > MAX_NUMBER){
        cout << "You entered an invalid number.\n Please enter a number between "<< MIN_NUMBER << " and " << MAX_NUMBER <<",\n";
        cin >> user_Number;

        //used cin.fail() to check if the input is a number.
        // If the input is not a number, clear the error state and ignore the invalid input.
        while (cin.fail()){
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input!! Please enter a valid number between " << MIN_NUMBER << " and " << MAX_NUMBER << ".\n";
            cin >> user_Number;
        }
    }
    ++number_Tries;
    // Check if the guessed number is equal to the secret number.
    // If the guessed number is equal to the secret number, congratulate the user.
    // If the guessed number is not equal to the secret number, provide feedback if the guessed number is too high or too low.
    if (user_Number > SECRET_NUMBER){
        cout << "Too High!!\n";
    }
    else if (user_Number < SECRET_NUMBER){
        cout << "Too Low!!\n";
    }
}   while (user_Number != SECRET_NUMBER);

// Congratulate the user for guessing the correct number and display the number of tries taken.
cout << "----------------------------------------\n";
cout << "Congratulations!! "<< name <<  ". You guessed it.\n";
cout << "The secret number was " << SECRET_NUMBER << ".\n";
cout << "You took " << number_Tries << " tries to guess the correct number.\n";
cout << "Thank you for playing the game.\n";
cout << "----------------------------------------\n";
return 0;
}
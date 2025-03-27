/*Author: Karamveer Dhillon
 File Name: dhillon_Topic4_Lab1.cpp
 Date: Mar 05 2025
 Description: This program is guessing a random number between 1 and 10
 and then asking the user to give a number between 1 and 10 and then compares the user's number with the random number
 and tells the user if the number is too high or too low or if the user guessed the number correctly.
*/

// imported iostream library to use cin and cout.
#include <iostream>
// imported ctime library to use srand and rand.
#include <ctime>
// imported string library to use getline.
#include <string>
// using namespace std to avoid writing std:: before cout and cin.
using namespace std;

// main function
int main()
{
	// used srand function to generate random number.
	// used time(0) to get the current time in miliseconds to change the random number every milisecond.
	srand((unsigned)time(0));

	// used rand function to generate random number between 1 and 10.
	int random_num = rand() % 10 + 1;
	
	// declared a string variable to store the user's name.
	string user_name;

	// declared an unsigned int variable to store the user's number.
	unsigned int user_num;

	// asked the user to enter their full name.
	cout << "Please write your full name" << endl;

	// used getline to get the full name of the user.
	getline(cin, user_name);

	// asked the user to enter a number between 1 and 10.
	cout << "please enter a number between 1 and 10" << endl;

	// used cin to get the user's number.
	cin >> user_num;
	
	// used if statement to check if the user's number is less than 1 or greater than 10.
	if (user_num < 1 || user_num > 10)
	{
		// if the user's number is less than 1 or greater than 10
		// then asked the user to enter a valid number between 1 and 10.
		cout << "Please enter a valid number between 1 and 10" << endl;

		// used cin to get the user's number.
		cin >> user_num;
		
	}
	
	// used if statement to check if the user's number is greater than the random number.
	if (user_num > random_num)
	{
		// if the user's number is greater than the random number
		// then told the user that the number is too high.
		cout << "Too High !!" << endl;

		// asked the user to enter a new number between 1 and 10 again.
		cout << "Please enter a new number between 1 and 10 again" << endl;
		// used cin to get the user's number.
		cin >> user_num;

			// used if statement to check if the user's number is greater or less than the random number.
			// and told the user if the number is too high or too low.
			if (user_num > random_num) cout << "Too High !!" << endl;
			if (user_num < random_num) cout << "Too Low !!" << endl;
			
			// if the user's number is equal to the random number then told the user that they guessed it correctly.
			else if (user_num == random_num) cout << "You guessed it!!" << endl;
			
			
	}	// used else if statement to check if the user's number is less than the random number.
		else if (user_num < random_num)
	{	
		// if the user's number is less than the random number
		// then told the user that the number is too low.
		cout << "Too Low!!" << endl;

		// asked the user to enter a new number between 1 and 10 again.
		cout << "Please enter a new number between 1 and 10" << endl;
		// used cin to get the user's number.
		cin >> user_num;
		
		// used if statement to check if the user's number is greater or less than the random number.
		// and told the user if the number is too high or too low.
		if (user_num > random_num) cout << "Too High !!" << endl;
		if (user_num < random_num) cout << "Too Low !!" << endl;
		// if the user's number is equal to the random number then told the user that they guessed it correctly.
		else if (user_num == random_num) cout << "You guessed it!!" << endl;
	}
		// if the user's number is equal to the random number then told the user that they guessed it correctly.
		else cout << "You guessed it!! " << endl;

	// used cout to print the random number.
	cout << "The number was " << random_num << endl;

	// used return 0 to end the program.
	return 0;
}


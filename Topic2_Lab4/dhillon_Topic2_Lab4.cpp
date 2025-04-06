/*
Author: Karamveer Dhillon
File Name: dhillon_Topic2_Lab4.cpp
Date: Feb 24 2025
Description: This program displays my name,favorite food,
the number of credits for this course, the maximum number of credits,
and the percentage of credits for this course compared to total credits.
*/

// Imported the required libraries
#include <iostream>
using namespace std;

// declared the main function
int main()
{
    // Declared the variables
    string myName = "Karamveer Dhillon";
    string favoriteFood = "Pizza";

    float creditsCSC120 = 4;
    float maxCredits = 18;
    float percentCredits = (creditsCSC120 / maxCredits) * 100;

    // Displayed the required values using cout function
    cout << "My Name is " << myName << endl;
    cout << "MY Favorite food is " << favoriteFood << endl;
    cout << "This course is " << creditsCSC120 << " credits of " << maxCredits << " credits maximum or " << percentCredits << " % of all the credits" << endl;

    // Returned 0 to end the program
    return 0;
}
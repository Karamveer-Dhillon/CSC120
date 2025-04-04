/*
Author: Karamveer Dhillon
File Name: dhillon_Topic3_Lab1.cpp
Date: Feb 26 2025
Description: This program take the number of boxes required as input from the user
and uses that input to calculate the total amount of 3 inch and 5.25 inch wood required to build those boxes.
*/

// Imported the required libraries.
#include <iostream>
#include <iomanip>
using namespace std;

// declared the main function.
int main()
{

    // Declared the constant variables to store the amount of wood required to build a box of 3 inch and 5.25 inch.
    const double WOOD_3_INCH = 25.5;
    const double WOOD_5_25_INCH = 7.5;

    // declared the double variable to store the number of boxes required.
    int numBoxes;
    
    // displayed the message to the user to enter the number of boxes and stored the input in "numBoxes".
    cout << "Please enter the number of boxes: ";
    
    // stored the input in "numBoxes".
    cin >> numBoxes;

    // calculated the total amount of 3 inch and 5.25 inch wood required to build the boxes
    // by multiplying the number of boxes and wood required to build a single box
    // and stored it in "total3Inch" and "total5_25Inch".
    
    double total3Inch = numBoxes * WOOD_3_INCH;
    double total5_25Inch = numBoxes * WOOD_5_25_INCH;

    // displayed the total amount of 3 inch and 5.25 inch wood required to build the boxes.
    cout << "3 Inch wood: " << fixed << setprecision(2) << total3Inch << " Inches" << endl;
    cout << "5.25 Inch wood: " << fixed << setprecision(2) << total5_25Inch << " Inches" << endl;

    // Returned 0 to end the program.
    return 0;
}

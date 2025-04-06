/*
Author: Karamveer Dhillon
File Name: dhillon_Topic2_Lab3.cpp
Date: Feb 12 2025
Description: This program calculates the total number of calories, 
fat and carbohydrates for 3 servings of brownies by multiplying the number 
of servings by the values for 1 serving.
*/

#include <iostream>
using namespace std;

int main()
{  
   // Initializing the variables

   string myName = "Karamveer Dhillon";
   string product = "Ghirardelli Dark Chocolate Brownie";
   double calories = 140;
   double fat = 3.5;
   double carbohydrates = 25;
   double numServings = 3;

   // Calculating the total values by multiplying by the number of servings

   double totalCalories = numServings * calories;
   double totalCarbohydrates = numServings * carbohydrates;
   double totalFat = numServings * fat;

   // Using cout to output the required values
   cout << "My Name: " << myName << endl;
   cout << "Product Name: " << product << endl;
   cout << "Total Calories"<<" ("<<numServings<<" Servings)" <<": " << totalCalories << endl;
   cout << "Total Fat"<<" ("<<numServings<<" Servings)" <<": " << totalFat << "g" << endl;
   cout << "Total Carbohydrates"<<" ("<<numServings<<" Servings)" <<": " << totalCarbohydrates <<"g" << endl;

   return 0;
}
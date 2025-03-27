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
   //Initializing the variables

   string my_Name = "Karamveer Dhillon";
   string product = "Ghirardelli Dark Chocolate Brownie";
   double calories = 140;
   double fat = 3.5;
   double carbohydrates = 25;
   double num_Servings = 3;

   // Calculating the total values by multiplying by the number of servings

   double total_Calories = num_Servings * calories;
   double total_Carbohydrates = num_Servings * carbohydrates;
   double total_Fat = num_Servings * fat;

   // Using cout to output the required values
   cout << "My Name: " << my_Name << endl;
   cout << "Product Name: " << product << endl;
   cout << "Total Calories"<<" ("<<num_Servings<<" Servings)" <<": " << total_Calories << endl;
   cout << "Total Fat"<<" ("<<num_Servings<<" Servings)" <<": " << total_Fat << "g" << endl;
   cout << "Total Carbohydrates"<<" ("<<num_Servings<<" Servings)" <<": " << total_Carbohydrates <<"g" << endl;

   return 0;
}
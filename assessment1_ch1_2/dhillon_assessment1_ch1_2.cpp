/* Author: Karamveer Dhillon
 * File Name: dhillon_assessment1_ch1_2.cpp
 * Date: 03/04/2025
 * Description: This program calculates the total cost of purchases, the tax owed, the total owed after tax
 * and the average cost of each item before and after tax.
 * The customer's name and the calculated values are outputted to the console using the cout function.
 */

// Imported iostream library to use cout function.
#include <iostream>
// Imported iomanip library to use fixed and setprecision functions.
#include <iomanip>

// Used the std namespace.
using namespace std;

// Main function
int main()
{
     // Stored the customer's name in a constant string variable.
     const string custName = "Tracy Chou";

     // Stored the cost of each item in a constant double variable.
     const double ssdCost = 279.99;
     const double notebookCost = 24.99;
     const double powerCableCost = 23.00;
     const double coffeeCost = 2.00;

     // Stored the tax rate in a constant double variable.
     const double taxRate = 6.25;

     // Calculated the gross cost by adding the cost of each item.
     double grossCost = ssdCost + notebookCost + powerCableCost + coffeeCost;

     // Calculated the tax owed by multiplying the sum of taxed items with the tax rate and dividing by 100.
     double tax = (ssdCost + notebookCost + powerCableCost) * taxRate / 100;

     // Calculated the total cost by adding the gross cost and the tax owed.
     double netCost = grossCost + tax;

     // Calculated the average cost of each item before tax by dividing the gross cost by 4.
     double avgCostGross = grossCost / 4;

     // Calculated the average cost of each item after tax by dividing the total cost by 4.
     double avgCostNet = netCost / 4;

     // Printed the customer's name to the console using the cout function.
     cout << "Customer Name: " << custName << endl;

     cout << endl                            // Added an empty line for better readability.
           << fixed << setprecision(2);       // Used the fixed and setprecision functions to display the values with 2 decimal places.
     
     // Printed the cost of each item, the subtotal, the tax owed, and the total cost to the console using the cout function.
     cout << "SSD: $" << ssdCost << endl;
     cout << "Notebook: $" << notebookCost << endl;
     cout << "Power Cable: $" << powerCableCost << endl;
     cout << "Coffee: $" << coffeeCost << endl;
     cout << "Subtotal: $" << grossCost << endl;
     cout << "Tax owed: $" << tax << endl;
     cout << "Total owed: $" << netCost << endl
           << endl;       // Added an empty line for better readability.

     // Printed the average cost of each item before and after tax to the console using the cout function.
     cout << "Average cost of purchases before tax: $" << avgCostGross << endl;
     cout << "Average cost of purchases after tax: $" << avgCostNet << endl;

     // Returned 0 to end the program.
     return 0;
}
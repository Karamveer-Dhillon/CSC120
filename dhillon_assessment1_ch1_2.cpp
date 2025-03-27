/* Author: Karamveer Dhillon
 * File Name: dhillon_assessment1_ch1_2.cpp
 * Date: 03/04/2025
 * Description: This program calculates the total cost of purchases, the tax owed, the totat owed after tax
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
    const string cust_name = "Tracy Chou";

    // Stored the cost of each item in a constant double variable.
    const double ssd_cost = 279.99;
    const double notebook_cost = 24.99;
    const double power_cable_cost = 23.00;
    const double coffee_cost = 2.00;

    // Stored the tax rate in a constant double variable.
    const double tax_rate = 6.25;

    // Calculated the gross cost by adding the cost of each item.
    double gross_cost = ssd_cost + notebook_cost + power_cable_cost + coffee_cost;

    // Calculated the tax owed by multiplying the sum of taxed items with the tax rate and dividing by 100.
    double tax = (ssd_cost + notebook_cost + power_cable_cost) * tax_rate / 100;

    // Calculated the total cost by adding the gross cost and the tax owed.
    double net_cost = gross_cost + tax;

    // Calculated the average cost of each item before tax by dividing the gross cost by 4.
    double avg_cost_gross = gross_cost / 4;

    // Calculated the average cost of each item after tax by dividing the total cost by 4.
    double avg_cost_net = net_cost / 4;

    // Printed the customer's name to the console using the cout function.
    cout << "Customer Name: " << cust_name << endl;

    cout << endl                            // Added an empty line for better readability.
         << fixed << setprecision(2);       // Used the fixed and setprecision functions to display the values with 2 decimal places.
    
    // Printed the cost of each item, the subtotal, the tax owed, and the total cost to the console using the cout function.
    cout << "SSD: $" << ssd_cost << endl;
    cout << "Notebook: $" << notebook_cost << endl;
    cout << "Power Cable: $" << power_cable_cost << endl;
    cout << "Coffee: $" << coffee_cost << endl;
    cout << "Subtotal: $" << gross_cost << endl;
    cout << "Tax owed: $" << tax << endl;
    cout << "Total owed: $" << net_cost << endl
         << endl;       // Added an empty line for better readability.

    // Printed the average cost of each item before and after tax to the console using the cout function.
    cout << "Average cost of purchases before tax: $" << avg_cost_gross << endl;
    cout << "Average cost of purchases after tax: $" << avg_cost_net << endl;

    // Returned 0 to end the program.
    return 0;
}
/*
This program calculates the cost of a stock purchase today and yesterday by multiplying the share price with number of shares
and adding the commission for using different share price for today and yesterday
and then calculates the difference between the two by subtracting yesterday's cost from today's cost.
*/

// imports iostream library to use cout function.
#include <iostream>
// imports string library to use strings functions.
#include <string>
// using namespace std to avoid writing std:: everytime.
using namespace std;

int main() {
	// declaring a variable with double datatype to store the price of share today.
	double sharePrice = 234.98;
	// declaring a variable with string datatype to store the name of stock.
	string stockName = "GameStop";
	// declaring a variable with int datatype to store the number of shares purchased.
	int numShares = 18;
	// declaring a constant variable with double datatype to store the commission rate.
	// const keyword is used to make the variable constant therefore it's value cannot be changed.
	const double COMMISSION = 2.;


    // declaring a variable with double datatype to store the cost of stock.
	double stockCost;
	// declaring a variable with double datatype to store the commission cost.
	double commissionCost;
	// Declaring two variables with double datatype to store the total cost
	// today and yesterday.
	double totalCostToday, totalCostYesterday;
	// declaring a variable with double datatype to store the difference between today and yesterday.
	double difference;

	// printing the string "Today: " to the console.
	cout << "Today: " << endl;
	// calculating the cost of stock by multiplying the number of shares with the price of share.
	stockCost = numShares * sharePrice;
	// calculating the commission cost by multiplying the stock cost with the commission percentage.
	commissionCost = stockCost * COMMISSION / 100.;
	// calculating the total cost today by adding the stock cost and the commission cost.
	totalCostToday = stockCost + commissionCost;

	// printing the number of shares,the string " shares of ", stock name,the string " at $", share price, the string " per share" to the console.
	cout << numShares << " shares of " << stockName << " at $" << sharePrice << " per share." << endl;
	// printing the string "Cost:       $", value of stock cost variable to the console.
	cout << "Cost:       $" << stockCost << endl;
	// printing the string "Commission: $", value of commission cost variable to the console.
	cout << "Commission: $" << commissionCost << endl;
	// printing the string "Total:      $", value of total cost today variable to the console.
	cout << "Total:      $" << totalCostToday << endl;

	// printing the string "Yesterday: " to the console.
	cout << "Yesterday: " << endl;
	// changing the value of share price variable to 314.74.
	sharePrice = 314.74;
	// calculating yesterday's cost of stock by multiplying the number of shares with yesterday's price of share.
	stockCost = numShares * sharePrice;
	// calculating the commission cost by multiplying the stock cost with the commission percentage.
	commissionCost = stockCost * COMMISSION / 100.;
	// calculating the total cost of yesterday by adding the stock cost and the commission cost.
	totalCostYesterday = stockCost + commissionCost;

	// printing the number of shares,the string " shares of ", stock name,the string " at $", share price, the string " per share" to the console.
	cout << numShares << " shares of " << stockName << " at $" << sharePrice << " per share." << endl;
	// printing the string "Cost:       $", value of stock cost variable to the console.
	cout << "Cost:       $" << stockCost << endl;
	// printing the string "Commission: $", value of commission cost variable to the console.
	cout << "Commission: $" << commissionCost << endl;
	// printing the string "Total:      $", value of total cost yesterday variable to the console.
	cout << "Total:      $" << totalCostYesterday << endl;

	// calculating the difference between today and yesterday by subtracting the total cost yesterday from the total cost today.
	difference = totalCostToday - totalCostYesterday;
	// printing the string "The difference is $" and the value of difference variable to the console.
	cout << "The difference is $" << difference << endl;
	// returning 0 to indicate that the program ended successfully.
	return 0;
}

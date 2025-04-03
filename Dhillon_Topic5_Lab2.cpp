#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Asked user's name as input.
    string yourName;
    cout << "Enter your name: ";
    getline(cin, yourName);

    // Used ofstream to create and open the file.
    ofstream outputFile;
    outputFile.open(yourName + ".txt");
    if (!outputFile) {
            cout << "File could not be opened!" << endl;
            return 1;
        }
    // Output my name to the file.
    outputFile << yourName << "\n";

    // Used time(0) in srand to get random vales everytime.
    srand(time(0));

    // Declared constants for generating the random numbers.
    const int MAX = 100;
    const int MIN = 0;

    //Used a for loop to generate 50 random numbers between 0-100.
    for (int i = 0; i < 50; i++) {

        // Generated random numbers between 0-100.
        int randomNum = rand() % (MAX - MIN + 1) + MIN ;

        // Output the generated numbers to the file.
        outputFile << left << setw(4) << randomNum;

        // used if condition to add a new line after 10 numbers.
        if ((i + 1) % 10 == 0) outputFile << "\n";
    }
    //Closed the file.
    outputFile.close();

    // Used ifstream to open the file to read from it.
    ifstream inputFile;
    inputFile.open(yourName + ".txt");

    if (!inputFile) {
            cout << "Error opening file for reading!" << endl;
            return 1;
        }

    // Declared a string to hold the name read from the file.
    string inputName;
    getline(inputFile, inputName);
    // Out put the name in console.
    cout << "\nThe name in the file is: \n" << inputName << endl;

    //Declared a variable to store the value of the numbers read from the file
    int inputNumber;
    int valuesRead = 0;
    double total = 0;
    int maxValue = MIN;
    int minValue = MAX;

    while(inputFile >> inputNumber) {
        // add 1 to the value of the numbers read from the file every loop.
        valuesRead++;
        // add the value of the numbers read from the file every loop.
        total += inputNumber;

        // used to check if the number is less than the current minimum
        if (inputNumber < minValue) minValue = inputNumber;
        // used to check if the number is greater than the current maximum
        if (inputNumber > maxValue) maxValue = inputNumber;

        // Output the number in console.
        cout << left << setw(4) << inputNumber;
        // Added a new line after every 2 numbers.
        if ((valuesRead) % 2 == 0) cout << "\n";
    }
    // Close the file after reading.
    inputFile.close();

    // Calculated average;
    double average = total / valuesRead;
    // Display the final values.
    cout << "\nThe number of values read: " << valuesRead << "\n";
    cout << "The total: " << total << "\n";
    cout << "The Largest number: " << maxValue << "\n";
    cout << "The Smallest number: " << minValue << "\n";
    cout << fixed << setprecision(2) << "The average: " << average << endl;


    // Return 0 to end the program.
    return 0;
}

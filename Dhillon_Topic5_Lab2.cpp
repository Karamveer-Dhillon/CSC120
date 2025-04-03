#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Asked user's name as input.
    string your_Name;
    cout << "Enter your name: ";
    getline(cin, your_Name);

    // Used ofstream to create and open the file.
    ofstream file;
    file.open(your_Name + ".txt");
    if (!file) {
            cout << "File could not be opened!" << endl;
            return 1;
        }
    // Output my name to the file.
    file << your_Name << "\n";

    // Used time(0) in srand to get random vales everytime.
    srand(time(0));

    // Declared constants for generating the random numbers.
    const int MAX = 100;
    const int MIN = 0;

    //Used a for loop to generate 50 random numbers between 0-100.
    for (int i = 0; i < 50; i++) {

        // Generated random numbers between 0-100.
        int random_Num = rand() % (MAX - MIN + 1) + MIN ;

        // Output the generated numbers to the file.
        file << left << setw(4) << random_Num << "";

        // used if condition to add a new line after 10 numbers.
        if ((i + 1) % 10 == 0) file << "\n";
    }
    //Closed the file.
    file.close();

    // Used ifstream to open the file to read from it.
    ifstream in_File;
    in_File.open(your_Name + ".txt");

    if (!in_File) {
            cout << "Error opening file for reading!" << endl;
            return 1;
        }

    // Declared a string to hold the name read from the file.
    string in_Name;
    getline(in_File, in_Name);
    // Out put the name in console.
    cout << "\nThe name in the file is: \n" << in_Name << endl;

    //Declared a variable to store the value of the numbers read from the file
    int in_Num;
    int values_Read = 0;
    double total = 0;
    int max_Value = MIN;
    int min_Value = MAX;

    while(in_File >> in_Num) {
        // add 1 to the value of the numbers read from the file every loop.
        values_Read++;
        // add the value of the numbers read from the file every loop.
        total += in_Num;

        // used to check if the number is less than the current minimum
        if (in_Num < min_Value) min_Value = in_Num;
        // used to check if the number is greater than the current maximum
        if (in_Num > max_Value) max_Value = in_Num;

        // Output the number in console.
        cout << left << setw(4) << in_Num;
        // Added a new line after every 2 numbers.
        if ((values_Read) % 2 == 0) cout << "\n";
    }
    // Close the file after reading.
    in_File.close();

    // Calculated average;
    double average = total / values_Read;
    // Display the final values.
    cout << "\nThe number of values read: " << values_Read << "\n";
    cout << "The total: " << total << "\n";
    cout << "The Largest number: " << max_Value << "\n";
    cout << "The Smallest number: " << min_Value << "\n";
    cout << fixed << setprecision(2) << "The average: " << average << endl;


    // Return 0 to end the program.
    return 0;
}

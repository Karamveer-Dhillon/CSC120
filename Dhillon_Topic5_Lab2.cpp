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
    // Output my name to the file.
    file << your_Name << "\n";

    // Used time(0) in srand to get random vales everytime.
    srand(time(0));
    //Used a for loop to generate 50 random numbers between 0-100.
    for (int i = 0; i < 50; i++) {

        // Declared constants for generating the random numbers.
        const int MAX = 100;
        const int MIN = 0;

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
    if(in_File.is_open()){
        // Declared a string to hold the name read from the file.
        string in_Name;
        getline(in_File, in_Name);
        // Out put the name in console.
        cout << "The name in the file is: " << in_Name << endl;

        //Declared a variable to store the value of the numbers read from the file
        int in_Num;
        int values_Read = 0;
        double total = 0;
        while(in_File >> in_Num){
            values_Read++;
            total += in_Num;
            cout << left << setw(4) << in_Num;
            if ((values_Read) % 2 == 0) cout << "\n";
        }
        cout << "The number of values read: " << values_Read << endl;
        cout << "The total: " << total << endl;
        cout <<
        cout << fixed << setprecision(2) << "The average: " << (total/values_Read) << endl;

    }
    else cout << "File could not be opened !!"<< endl;


    return 0;
}

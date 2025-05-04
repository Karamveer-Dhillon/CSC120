/*
* Name: Karamveer Dhillon
* Date: 2025-05-03
* Filename: DhillonTopic7ReadingAssignment.cpp
* Description: This program demonstrates the use of arrays and functions.
* It includes functions to generate random numbers,
* fill arrays with random values, print arrays,
* find the minimum and maximum values in an array.
*/
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

// Function to get a random number between max and min.
int randBetween(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}

// Function to fill random values to the array.
void randomizeArray(int array[], int size, int randMax, int randMin) {
    for (int i = 0; i < size; i++) {
        array[i] = randBetween(randMin, randMax);
    }
}

// Function to print the array
void printArray(int array[], int size, int valuesPerLine, string output = "cout") {
    if (output == "cout") {
        for (int i = 0; i < size; i++) {
            cout << array[i];
            cout << " ";
            if (i % valuesPerLine == valuesPerLine - 1) {
                cout << "\n";
            }
        }
    }
    else if (output == "file") {
        ofstream file("KaramveerDhillon.txt");
        for(int i = 0; i < size; i++) {
            file << array[i];
            file << " ";
            if (i % valuesPerLine == valuesPerLine - 1) {
                file << "\n";
            }
        }
        file.close();
    }
    else cout<< "Invalid output type" << endl;
}

// Function to find the minimum value in the array
int findMin(int array[], int size) {
    int min = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] < min)
            min = array[i];
    }
    return min;
}

// Function to find the maximum value in the array
int findMax(int array[], int size) {
    int max = array[0];
    for(int i = 1; i < size; i++) {
        if(array[i] > max)
            max = array[i];
    }
    return max;
}

// Function to find the sum of the array
int findSum(int array[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum;
}

// Function to find the average of the array
double findAverage(int array[], int size) {
    int sum = findSum(array, size);
    return static_cast<double>(sum) / size;
}

int main() {
    // Seed the random number generator with the current time.
    srand(time(0));
    // Assign array size to ARRAYSIZE constant.
    const int ARRAYSIZE = 50;
    // Create an array of size ARRAYSIZE.
    int myArray[ARRAYSIZE];
    // Call the randomizeArray function to fill the array with random values.
    randomizeArray(myArray, ARRAYSIZE, 200, -75);
    // Call the printArray function to print the array to the console.
    printArray(myArray, ARRAYSIZE, 2);
    // Call the printArray function to print the array to a file.
    printArray(myArray, ARRAYSIZE, 2, "file");
    // Call the findMin function to find the minimum value in the array.
    cout << "The minimum value is: " << findMin(myArray, ARRAYSIZE) << endl;
    // Call the findMax function to find the maximum value in the array.
    cout << "The maximum value is: " << findMax(myArray, ARRAYSIZE) << endl;
    // Call the findSum function to find the sum of the array.
    cout << "The sum of the array is: " << findSum(myArray, ARRAYSIZE) << endl;
    // Call the findAverage function to find the average of the array.
    cout << "The average of the array is: " << findAverage(myArray, ARRAYSIZE) << endl;

    // return 0 to indicate successful execution.
    return 0;
}
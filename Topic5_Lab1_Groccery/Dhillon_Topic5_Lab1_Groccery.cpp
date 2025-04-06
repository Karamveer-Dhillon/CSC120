#include <iostream>
#include <string>
using namespace std;

int main(){
    int numItems;
    string itemName;
    double itemPrice;
    double totalPrice = 0;

    // used a boolean to run the loop.
    bool isRunning = true;
    do{
        cout << "Please enter the number of items in the grocery cart:";
        cin >> numItems;
        cin.ignore();

        while (numItems <= 0 || numItems >= 30) {
            cout << "Invalid input. Please enter a number between 1 and 30:";
            cin >> numItems;
            cin.ignore();
        }
        // used the for loop because we know the number of time the loop has to run.
        for(int i = 0; i < numItems; i++){
            cout << "Please enter the name of the item:";
            getline(cin, itemName);
            cout << "Please enter the price of the item:";
            cin >> itemPrice;
            cin.ignore();

            while (itemPrice <= 0 || itemPrice >= 50) {
                cout << "Invalid input. Please enter a price between $0.01 and $50:";
                cin >> itemPrice;
                cin.ignore();
            }
            totalPrice += itemPrice;
            cout << itemName << ": $" << itemPrice << " added to the cart." << endl;
            isRunning = false;
        }
    } while (isRunning);

    cout << "\nThe total price is $" << totalPrice << endl;
    return 0;
}
// I used a do while loop and a for loop. I used the for loop
// because we know that we have to run the code for the number of items input.

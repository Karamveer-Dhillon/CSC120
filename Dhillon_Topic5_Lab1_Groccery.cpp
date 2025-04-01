#include <iostream>
#include <string>
using namespace std;

int main(){
    int num_Items;
    string item_Name;
    double item_Price;
    double total_Price = 0;

    // used a boolean to run the loop.
    bool is_Running = true;
    do{
        cout << "Please enter the number of items in the grocery cart:";
        cin >> num_Items;
        cin.ignore();

        while (num_Items <= 0 || num_Items >= 30) {
            cout << "Invalid input. Please enter a number between 1 and 30:";
            cin >> num_Items;
            cin.ignore();
        }
        // used the for loop because we know the number of time teh loop has to run.
        for(int i = 0; i < num_Items; i++){
            cout << "Please enter the name of the item:";
            getline(cin,item_Name);
            cout << "Please enter the price of the item:";
            cin >> item_Price;
            cin.ignore();

            while (item_Price <= 0 || item_Price >= 50) {
                cout << "Invalid input. Please enter a price betwee $0.01 and $50:";
                cin >> item_Price;
                cin.ignore();
            }
            total_Price += item_Price;
            cout << item_Name << ": $" << item_Price << " added to the cart."<< endl;
            is_Running = false;
        }
    } while (is_Running);

    cout << "\nThe total price is $" << total_Price << endl;
    return 0;
}
// I used a do while loop and a for loop. I used the for loop
// because we know that we have to run the code for the number of items input.

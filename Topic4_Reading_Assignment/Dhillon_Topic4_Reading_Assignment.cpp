/*Author: Karamveer Dhillon
 File Name: Dhillon_Topic4_Reading_Assignment.cpp
 Date: Mar 09 2025
 Description: This program is a dice game between the user and Megatron. The user and Megatron take turns rolling dice. The user can choose to roll 1 dice or 2 dice or skip their turn. If a player's score is greater than 15, they lose. If both players have a score less than 15, the player with the score closest to 15 wins. If both players have the same score, it's a tie. The player with the lowest number in a dice throw goes first. The number of dice Megatron rolls is also randomly selected between 1 and 2. The dice rolls are randomly generated between 1 and 8 using rand function. The program outputs the winner or a tie.
*/

// importing libraries
#include <iostream>
#include <ctime>

using namespace std;

// main function
int main()
{
    //used srand and rand functions to generate random numbers.
    srand((unsigned)time(0));
    // defined variables to store dice rolls.
    int user_turn = rand() % 8 + 1;
    int megatron_turn = rand() % 8 + 1;

    // defined variable to store user's choice of dice roll.
    int user_roll; 
    // defined variables to store dice rolls for user and Megatron.
    int user_1st_roll = rand() % 8 + 1;
    int user_2nd_roll = rand() % 8 + 1;
    int megatron_1st_roll = rand() % 8 + 1;
    int megatron_2nd_roll = rand() % 8 + 1;
    // defined variable to store number of dice Megatron rolls.
    int megatron_num_dice = rand() % 2 + 1;

    // if user's turn is less than Megatron's turn, user goes first.
    if (user_turn < megatron_turn)
    {
        cout << "You go first!" << endl;
        cout << "Please enter \"1\" to roll 1 dice" << endl;
        cout << "Please enter \"2\" to roll 2 dice" << endl;
        cout << "Please enter \"0\" to skip turn" << endl;
        cin >> user_roll;
        
        // user rolled 1 dice.
        if (user_roll == 1)
        { 
            // User's first turn.
            cout << "You rolled a " << user_1st_roll << endl;
            cout << "your score is " << user_1st_roll << endl;
            cout << "Megatron's turn!" << endl;
            // Megatron's first turn
            if (megatron_num_dice == 1)
            { // Megatron rolled 1 dice.
                cout << "Megatron rolled a " << megatron_1st_roll << endl;
                cout << "Megatron's score is " << megatron_1st_roll << endl;
                cout << "Please enter \"1\" to roll 1 dice" << endl;
                cin >> user_roll; // user's second turn
                if (user_roll == 1)
                {
                    cout << "You rolled a " << user_2nd_roll << endl;
                    cout << "your score is " << user_2nd_roll << endl;
                    cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                    // if user's total score is greater than 15, Megatron wins.
                    if ((user_1st_roll + user_2nd_roll) > 15)
                    {
                        cout << "Megatron wins!" << endl;
                    }
                    else
                    {   // Megatron's second turn
                        cout << "Megatron's turn!" << endl;
                        cout << "Megatron rolled a " << megatron_2nd_roll << endl; 
                        cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                        // if Megatron's total score is greater than 15, user wins.
                        if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                        {
                            cout << "You win!" << endl;
                        }
                        else
                        {   // if both players have a score less than 15, the player with the score closest to 15 wins.
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }
                }
                else if (user_roll == 2)
                {
                    cout << "you only have 1 dice left!" << endl;
                }
                else if (user_roll == 0)
                {
                    cout << "You skipped your turn!" << endl;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                }
            }
            if (megatron_num_dice == 2) {
                cout << "Megatron rolled a " << megatron_1st_roll << " and a " << megatron_2nd_roll << endl;
                cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cin >> user_roll; // user's second turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_2nd_roll << endl;
                        cout << "your score is " << user_2nd_roll << endl;
                        cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "you only have 1 dice left!" << endl;
                    }
                    else if (user_roll == 0)
                    {
                        cout << "You skipped your turn!" << endl;
                    }
                    else
                    {
                        cout << "Invalid input!" << endl;
                    }
                }   
            }
        }
        else if (user_roll == 2) // user rolled 2 dice.
        {                        // User's first turn.
            cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
            cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
            if ((user_1st_roll + user_2nd_roll) > 15)
            {
                cout << "Megatron wins!" << endl;
            }
            else
            {
                cout << "Megatron's turn!" << endl;
                // Megatron's first turn
                if (megatron_num_dice == 1)
                { // Megatron rolled 1 dice.
                    cout << "Megatron rolled a " << megatron_1st_roll << endl;
                    cout << "Megatron's score is " << megatron_1st_roll << endl;
                    cout << "Megatron's second turn!" << endl;
                    cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                    cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                    if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                    {
                        cout << "You win!" << endl;
                    }
                    else
                    {
                        if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "Megatron wins!" << endl;
                        else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "You win!" << endl;
                        else
                            cout << "It's a tie!" << endl;
                    }
                }
                if (megatron_num_dice == 2)
                { // Megatron rolled 2 dice.
                    cout << "Megatron rolled a " << megatron_1st_roll << " and a " << megatron_2nd_roll << endl;
                    cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                    if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                    {
                        cout << "You win!" << endl;
                    }
                    else
                    {
                        if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "Megatron wins!" << endl;
                        else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "You win!" << endl;
                        else
                            cout << "It's a tie!" << endl;
                    }
                }
            }
        }
        else if (user_roll == 0)
        {
            cout << "You skipped your turn!" << endl;
            cout << "Megatron's Turn" << endl;
        if (megatron_num_dice == 1)
        {
            cout << "Megatron rolled a " << megatron_1st_roll << endl;
            cout << "Megatron's score is " << megatron_1st_roll << endl;
            cout << "Please enter \"1\" to roll 1 dice" << endl;
            cout << "Please enter \"2\" to roll 2 dice" << endl;
            cout << "Please enter \"0\" to skip turn" << endl;
            cin >> user_roll; // user's first turn
            if (user_roll == 1)
            {
                cout << "You rolled a " << user_1st_roll << endl;
                cout << "your score is " << user_1st_roll << endl;
                cout << "your total score is " << user_1st_roll << endl;
                cout << "Megatron's turn!" << endl;
                cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cin >> user_roll; // user's second turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_2nd_roll << endl;
                        cout << "your score is " << user_2nd_roll << endl;
                        cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "you only have 1 dice left!" << endl;
                    }
                    else if (user_roll == 0)
                    {
                        cout << "You can't skip again" << endl;
                    }
                    else
                    {
                        cout << "Invalid input!" << endl;
                    }
                }
            }
            else if (user_roll == 2)
            {
                cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                if ((user_1st_roll + user_2nd_roll) > 15)
                {
                    cout << "Megatron wins!" << endl;
                }
                else
                {
                    cout << "Megatron's turn!" << endl;
                    cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                    cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                    if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                    {
                        cout << "You win!" << endl;
                    }
                    else
                    {
                        if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "Megatron wins!" << endl;
                        else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "You win!" << endl;
                        else
                            cout << "It's a tie!" << endl;
                    }
                }
            }
            else if (user_roll == 0) // user skipped turn
            {
                cout << "You skipped your turn!" << endl;
                cout << "Megatron's turn!" << endl;
                cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cout << "Please enter \"2\" to roll 2 dice" << endl;
                    cout << "Please enter \"0\" to skip turn" << endl;
                    cin >> user_roll; // user's first turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_1st_roll << endl;
                        cout << "your score is " << user_1st_roll << endl;
                        cout << "Please enter \"1\" to roll 1 dice" << endl;
                        cin >> user_roll; // user's second turn
                        if (user_roll == 1)
                        {
                            cout << "You rolled a " << user_2nd_roll << endl;
                            cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                            if ((user_1st_roll + user_2nd_roll) > 15)
                            {
                                cout << "Megatron wins!" << endl;
                            }
                            else
                            {
                                if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "Megatron wins!" << endl;
                                else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "You win!" << endl;
                                else
                                    cout << "It's a tie!" << endl;
                            }
                        }
                        else if (user_roll == 2)
                        {
                            cout << "you only have 1 dice left!" << endl;
                        }
                        else if (user_roll == 0)
                        {
                            cout << "You can't skip again" << endl;
                        }
                        else
                        {
                            cout << "Invalid input!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                        cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            cout << "Megatron's turn!" << endl;
                            cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                            cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                            if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                            {
                                cout << "You win!" << endl;
                            }
                            else
                            {
                                if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "Megatron wins!" << endl;
                                else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "You win!" << endl;
                                else
                                    cout << "It's a tie!" << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "Invalid input!" << endl;
                    }
                }
                
            }
        }
        else if (megatron_num_dice == 2)
        {
            cout << "Megatron rolled a " << megatron_1st_roll << " and a " << megatron_2nd_roll << endl;
            cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
            if ((megatron_1st_roll + megatron_2nd_roll) > 15)
            {
                cout << "You win!" << endl;
            }
            else
            {
                cout << "Please enter \"1\" to roll 1 dice" << endl;
                cout << "Please enter \"2\" to roll 2 dice" << endl;
                cout << "Please enter \"0\" to skip turn" << endl;
                cin >> user_roll; // user's first turn
                if (user_roll == 1)
                {
                    cout << "You rolled a " << user_1st_roll << endl;
                    cout << "your score is " << user_1st_roll << endl;
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cin >> user_roll; // user's second turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_2nd_roll << endl;
                        cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "you only have 1 dice left!" << endl;
                    }
                    else if (user_roll == 0)
                    {
                        cout << "You can't skip again" << endl;
                    }
                }
                else if (user_roll == 2)
                {
                    cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                    cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                    if ((user_1st_roll + user_2nd_roll) > 15)
                    {
                        cout << "Megatron wins!" << endl;
                    }
                    else if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                        cout << "Megatron wins!" << endl;
                    else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                        cout << "You win!" << endl;
                    else
                        cout << "It's a tie!" << endl;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                }
            }
        }
        }
        else
        {
            cout << "Invalid input!" << endl;
        }
    }
    
    // if user's turn is greater than Megatron's turn, Megatron goes first.
    else if (user_turn > megatron_turn)
    {
        cout << "Megatron goes first!" << endl;
        if (megatron_num_dice == 1)
        {
            cout << "Megatron rolled a " << megatron_1st_roll << endl;
            cout << "Megatron's score is " << megatron_1st_roll << endl;
            cout << "Please enter \"1\" to roll 1 dice" << endl;
            cout << "Please enter \"2\" to roll 2 dice" << endl;
            cout << "Please enter \"0\" to skip turn" << endl;
            cin >> user_roll; // user's first turn
            if (user_roll == 1)
            {
                cout << "You rolled a " << user_1st_roll << endl;
                cout << "your score is " << user_1st_roll << endl;
                cout << "your total score is " << user_1st_roll << endl;
                cout << "Megatron's turn!" << endl;
                cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cin >> user_roll; // user's second turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_2nd_roll << endl;
                        cout << "your score is " << user_2nd_roll << endl;
                        cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }

                    else if (user_roll == 2)
                    {
                        cout << "you only have 1 dice left!" << endl;
                    }
                    else if (user_roll == 0)
                    {
                        cout << "You can't skip again" << endl;
                    }
                    else
                    {
                        cout << "Invalid input!" << endl;
                    }
                }
            }
            else if (user_roll == 2)
            {
                cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                if ((user_1st_roll + user_2nd_roll) > 15)
                {
                    cout << "Megatron wins!" << endl;
                }
                else
                {
                    cout << "Megatron's turn!" << endl;
                    cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                    cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                    if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                    {
                        cout << "You win!" << endl;
                    }
                    else
                    {
                        if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "Megatron wins!" << endl;
                        else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                            cout << "You win!" << endl;
                        else
                            cout << "It's a tie!" << endl;
                    }
                }
            }
            else if (user_roll == 0) // user skipped turn
            {
                cout << "You skipped your turn!" << endl;
                cout << "Megatron's turn!" << endl;
                cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                {
                    cout << "You win!" << endl;
                }
                else
                {
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cout << "Please enter \"2\" to roll 2 dice" << endl;
                    cout << "Please enter \"0\" to skip turn" << endl;
                    cin >> user_roll; // user's first turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_1st_roll << endl;
                        cout << "your score is " << user_1st_roll << endl;
                        cout << "Please enter \"1\" to roll 1 dice" << endl;
                        cin >> user_roll; // user's second turn
                        if (user_roll == 1)
                        {
                            cout << "You rolled a " << user_2nd_roll << endl;
                            cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                            if ((user_1st_roll + user_2nd_roll) > 15)
                            {
                                cout << "Megatron wins!" << endl;
                            }
                            else
                            {
                                if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "Megatron wins!" << endl;
                                else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "You win!" << endl;
                                else
                                    cout << "It's a tie!" << endl;
                            }
                        }
                        else if (user_roll == 2)
                        {
                            cout << "you only have 1 dice left!" << endl;
                        }
                        else if (user_roll == 0)
                        {
                            cout << "You can't skip again" << endl;
                        }
                        else
                        {
                            cout << "Invalid input!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                        cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            cout << "Megatron's turn!" << endl;
                            cout << "Megatron rolled a " << megatron_2nd_roll << endl; // Megatron's second turn
                            cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
                            if ((megatron_1st_roll + megatron_2nd_roll) > 15)
                            {
                                cout << "You win!" << endl;
                            }
                            else
                            {
                                if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "Megatron wins!" << endl;
                                else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                    cout << "You win!" << endl;
                                else
                                    cout << "It's a tie!" << endl;
                            }
                        }
                    }
                    else
                    {
                        cout << "Invalid input!" << endl;
                    }
                }
            }
        }
        else if (megatron_num_dice == 2)
        {
            cout << "Megatron rolled a " << megatron_1st_roll << " and a " << megatron_2nd_roll << endl;
            cout << "Megatron's score is " << megatron_1st_roll + megatron_2nd_roll << endl;
            if ((megatron_1st_roll + megatron_2nd_roll) > 15)
            {
                cout << "You win!" << endl;
            }
            else
            {
                cout << "Please enter \"1\" to roll 1 dice" << endl;
                cout << "Please enter \"2\" to roll 2 dice" << endl;
                cout << "Please enter \"0\" to skip turn" << endl;
                cin >> user_roll; // user's first turn
                if (user_roll == 1)
                {
                    cout << "You rolled a " << user_1st_roll << endl;
                    cout << "your score is " << user_1st_roll << endl;
                    cout << "Please enter \"1\" to roll 1 dice" << endl;
                    cin >> user_roll; // user's second turn
                    if (user_roll == 1)
                    {
                        cout << "You rolled a " << user_2nd_roll << endl;
                        cout << "your total score is " << user_1st_roll + user_2nd_roll << endl;
                        if ((user_1st_roll + user_2nd_roll) > 15)
                        {
                            cout << "Megatron wins!" << endl;
                        }
                        else
                        {
                            if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "Megatron wins!" << endl;
                            else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                                cout << "You win!" << endl;
                            else
                                cout << "It's a tie!" << endl;
                        }
                    }
                    else if (user_roll == 2)
                    {
                        cout << "you only have 1 dice left!" << endl;
                    }
                    else if (user_roll == 0)
                    {
                        cout << "You can't skip again" << endl;
                    }
                }
                else if (user_roll == 2)
                {
                    cout << "You rolled a " << user_1st_roll << " and a " << user_2nd_roll << endl;
                    cout << "your score is " << user_1st_roll + user_2nd_roll << endl;
                    if ((user_1st_roll + user_2nd_roll) > 15)
                    {
                        cout << "Megatron wins!" << endl;
                    }
                    else if ((15 - (user_1st_roll + user_2nd_roll)) > (15 - (megatron_1st_roll + megatron_2nd_roll)))
                        cout << "Megatron wins!" << endl;
                    else if ((15 - (user_1st_roll + user_2nd_roll)) < (15 - (megatron_1st_roll + megatron_2nd_roll)))
                        cout << "You win!" << endl;
                    else
                        cout << "It's a tie!" << endl;
                }
                else
                {
                    cout << "Invalid input!" << endl;
                }
            }
        }
    }
    // if both players have the same number, print "It's a tie!"
    else
        cout << "It's a tie!" << endl;
    
        // end of program
    return 0;
}
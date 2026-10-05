#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
using namespace std;

int main(){
    //initializing all variables needed
    unsigned int playerOne, playerTwo;
    string playerOneRoll, playerTwoRoll;
    const unsigned int minValue = 1, maxValue = 20;

    //gathering random values of the dice roll
    playerOne = (rand() % (maxValue - minValue + 1)) +  minValue;
    playerTwo = (rand()% (maxValue - minValue + 1)) + minValue;
    //gathering info based off the roll to automatically put
    if (playerOne == 1)
        playerOneRoll = "Critical Failure";
    if (playerOne == 20)
        playerOneRoll = "Critical Success";

    if (playerTwo == 1)
        playerTwoRoll = "Critical Failure";
    if (playerTwo == 20)
        playerTwoRoll = "Critical Success";

    //if player one has a higher dice roll
    if (playerOne > playerTwo)
    {
        if (playerTwo == 1)
        {
            //sets the color to red for player two's critical failure
            setConsoleTextAttribute(screen, 12);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            //sets the color back to white
            setConsoleTextAttribute(screen, 15);
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player One!";
        }
        //sets the color to green for player one's critical success
        else if (playerOne == 20)
        {
            setConsoleTextAttribute(screen, 10);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;

        //sets the color back to white
            setConsoleTextAttribute(screen, 15);
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player One!";
        }

        else
        {
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player One!";
        }
    }

    //if player two has a higher dice roll
    else if (playerTwo > playerOne)
    {
        
        if (playerOne == 1)
        {
            //sets the color to red for player one's critical failure
            setConsoleTextAttribute(screen, 12);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            //sets the color back to white
            setConsoleTextAttribute(screen, 15);
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player Two!";
        }

        else if (playerTwo == 20)
        {
            //sets the color to green for player two's critical success
            setConsoleTextAttribute(screen, 10);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            //sets the color back to white
            setConsoleTextAttribute(screen, 15);
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player Two!";
        }

        else
        {
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The winner is Player Two!";
        }
    }

    //if players have the same dice roll
    else if (playerOne == playerTwo)
    {
        if (playerOne == 1 or playerTwo == 1)
        {
            setConsoleTextAttribute(screen, 12);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            setConsoleTextAttribute(screen, 15);
            cout << "The players were evenly matched...";
        }

        else if (playerOne == 20 or playerTwo == 20)
        {
            setConsoleTextAttribute(screen, 10);
            cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
            cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            setConsoleTextAttribute(screen, 15);
            cout << "The players were evenly matched...";
        }    

        else 
        {
         cout << "Player One: " << playerOneRoll << " Roll: "<< playerOne << endl;
         cout << "Player Two: " << playerTwoRoll << " Roll: " << playerTwo << endl;
            cout << "The players were evenly matched..."; 
        }

    }
    return 0;

}
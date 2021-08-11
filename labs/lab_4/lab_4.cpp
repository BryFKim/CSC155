/**
 * LAB 4
 * Author: Bryan Kim
 *
 * Objective: Implement the game of NIM
 */
#include <iostream>
#include <cmath>

using namespace std;

//Place some function prototypes

//int selectionRange(int marbles); //Returns the range of possible marble selection values
//void printInstructions(int numMarbs, int playerFirst, int compSmart); //Prints Instructions and how the game is played, and provides basic info about game setup
//int playerSelect(int marbles); //Returns the number of marbles the player is selecting
//int smartComputer(int marbles); //For smart computer moves - returns the number of marbles TAKEN
//int dumbComputer(int marbles); //For dumb computer moves -  returns the number of marbles TAKEN


int main_55()
{
    srand(time(0));   //set the random seed
    //Determine the random number of marbles in the bowl: 10 to 100
    int numMarbles = rand() % 91 + 10;

    //Determine who goes first: Comp (0) or Player (1)
    int turn = rand() % 2;

    //Determine whether or not the Comp is Dumb (0) or Smart (1).
    int smart = rand() % 2;

    printInstructions(numMarbles,turn,smart);

    //Declare a variable to hold the choice of how many marbles is being taken
    int choice;

    //Make a move: Comp or Player, depending on who goes first
    //This portion of the code requires loops.
    //Play until there is 1 marble left.
    while(numMarbles > 1) {
        if (turn == 1) {
            cout << "Player's turn" << endl;
            cout << "There are " << numMarbles << " available." << endl;
            // Have the player make a choice
            choice = playerSelect(numMarbles);
            //Announce the player selection;
            cout << "The player chooses " << choice << " marbles." << endl;
            //Update the number of marbles
            numMarbles = numMarbles - choice;
            //Set the turn to the computer
            turn = 0;
        } else {
            cout << "Computer's turn" << endl;
            //Dumb Strategy
            if (smart == 0) {
                cout << "There are " << numMarbles << " available." << endl;
                //Computer makes choice
                choice = dumbComputer(numMarbles);
                //Announce choice
                cout << "The computer chooses " << choice << " marbles." << endl;
                //Update the number of marbles
                numMarbles = numMarbles - choice;
                //Set the turn to the computer
                turn = 1;
            } else {
                cout << "There are " << numMarbles << " available." << endl;
                //Computer makes choice
                choice = smartComputer(numMarbles);
                //Announce choice
                cout << "The computer chooses " << choice << " marbles." << endl;
                //Update the number of marbles
                numMarbles = numMarbles - choice;
                //Set the turn to the computer
                turn = 1;
            }
        }
    }
    if(turn==0){
        cout << "Player wins, Computer loses" << endl;
    } else {
        cout << "Player loses, Computer wins" << endl;
    }

    //Display a message at the end of the game
    cout << "Good game!" << endl;
    return 0;
}

void printInstructions(int numMarbs, int playerFirst, int compSmart){
    cout << "Hello! Welcome to the game of NIM." << endl;
    cout << "The objective of the game is to take marbles in competition with the computer." << endl;
    cout << "During each turn, you must take at least one marble and at most half of the marbles (rounding down for odd values)" << endl;
    cout << "The player who takes the last marble in the game loses." << endl;
    cout << "For this game, you will be playing with a pile of " << numMarbs << " marbles." << endl;
    if (playerFirst == 1)
        cout << "You will be playing first." << endl;
    else
       cout << "The computer will be playing first." << endl;
    if (compSmart == 1)
        cout << "The computer will be playing a smart strategy" << endl;
    else
        cout << "The computer will be playing a naive strategy" << endl;
    cout << "Best of luck! Let the game begin!" << endl;

}

int selectionRange(int marbles){
    int upperLimit = marbles/2;
    return upperLimit;
}

int playerSelect(int marbles){
    //Declare variable to hold the number of marbles the player wants to take;
    int playerChoice;
    //Obtain the upper limit for the number of marbles a player can take
    int upperLimit = selectionRange(marbles);
    cout << "Player, please choose how many marbles you wish to take from the pile: ";
    cin >> playerChoice;
    //As long as the player chooses an invalid value, keep asking them to provide a valid one
    while(playerChoice > upperLimit || playerChoice < 1) {
        cout << "Player, please select a valid number of marbles to take." << endl;
        cout << "As a reminder, you can take as little as 1, or as many as " << upperLimit <<"." << endl;
        cout << "Please state how many marbles you wish to take: ";
        cin >> playerChoice;
    }
    return playerChoice;
}

int smartComputer(int marbles) {
    //If the number of marbles is equal to 2^x-1, then choose a random value
    //We can use a bit of algebra to find that as long as log_2(marbles+1) is an integer,
    //then we need to choose a random value. One way we can make sure this is the case is by
    //Checking if the floor and ceil of the log_2(marbles+1) is the same
    if(floor(log2(marbles+1)) == ceil(log2(marbles+1)))
        return rand() % selectionRange(marbles) + 1;
    else
        return marbles - (pow(2, (int) log2(marbles)) - 1);
}

int dumbComputer(int marbles){
    //Just need to make sure the computer does not take more than half of the marbles
    return rand() % selectionRange(marbles) + 1;
}


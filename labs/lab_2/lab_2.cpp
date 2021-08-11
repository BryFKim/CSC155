/************************************************************************
 * LAB 2
 * Author: Bryan Kim
 *
 * Objective: Write a C++ program that will prompt the user to input their name
 *            (as a string) and age (as an integer).The output will give a welcoming message
 *            using their name and also display how many days old they are.
 *
 * Assumption: The user will enter their name as a string and age in years as an integer.
 *
 * Output: Standard Out welcoming the user, and displaying their name and age.
 *
 *
 *
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declare a string and integer variable to hold name, age, and age in days.
    string name;
    int age;
    int ageInDays;

    cout << "Hello! Hope you are well. Please provide your name: ";
    getline (cin, name);
    cout << "The name you have provided is " << name << endl;
    cout << "Now, please provide your age in whole years: ";
    cin >> age;
    //Calculate age in days
    ageInDays = age * 365;
    cout << "You are " << ageInDays << " days old." << endl;
    cout << "Goodbye!";

    return 0;
}
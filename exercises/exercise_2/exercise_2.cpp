/************************************************************************
 * Exercise 2
 * Author: Bryan Kim
 *
 * Objective: Write a C++ program that will prompt the user to input their name
 *            (as a string) and age (as an integer).The output will give a welcoming message
 *            using their name and also display how many days old they are, and also calculate how
 *            old they are in minutes and seconds.
 *
 * Assumption: The user will enter their name as a string and age in years as an integer.
 *             Also, the assumption here is that the # of minutes in a year is equal to 365*24*60,
 *             or 381,600 minutes in a year. Similarly, the assumption is that the # of seconds in a year
 *             is equivalent to 365*24*60*60, or 31,536,000 seconds in a year.
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

    //There is a non-negligible chance we run into an integer overflow issue with the
    //age in minutes and seconds, so we should store those values as long longs.

    long long ageInMinutes;
    long long ageInSeconds;
    long long daysToMinutes = 24.0*60.0;
    long long minutesToSeconds = 60.0;


    cout << "Hello! Hope you are well. Please provide your name: ";
    getline (cin, name);
    cout << "The name you have provided is " << name << endl;
    cout << "Now, please provide your age in whole years: ";
    cin >> age;
    //Calculate age in days
    ageInDays = age * 365;
    cout << "You are " << ageInDays << " days old." << endl;
    //Calculate age in minutes and seconds
    ageInMinutes = ageInDays * daysToMinutes;
    ageInSeconds = ageInMinutes * minutesToSeconds;
    cout << "You are " << ageInMinutes << " minutes old." << endl;
    cout << "You are " << ageInSeconds << " seconds old." << endl;
    cout << "Goodbye!";

    return 0;
}
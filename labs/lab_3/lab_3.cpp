/************************************************************************
 * LAB 3
 * Author: Bryan Kim
 *
 * Objective: Given a user provided integer year, determine if the year is a leap year.
 *
 * Assumption: The user will provide a valid year.
 *
 * Output: Standard out indicating whether the user provided year is a leap year or not.
 *
 *
 *
************************************************************************/

#include <iostream>
using namespace std;

int main() {
    //Declare variable to hold year input:
    int year;
    cout << "Please provide the year you wish to determine is or is not a leap year: ";
    cin >> year;
    //Declare + Initialize some variables to hold the results of
    //year modulo 4, 100, and 400. We will use the modulo to determine if
    //a year is divisible by a certain value, where divisibility is indicated
    //by a 0 remainder
    int yearModuloFour = year % 4;
    int yearModuloHundred = year % 100;
    int yearModuloFourHundred = year % 400;

    //There are two conditions here that make a year a leap year:
    //Condition 1: The year is divisible by 4 but not divisible by 100
    //Condition 2: The year is divisible by 400
    if (
            ((yearModuloFour == 0) && (yearModuloHundred != 0)) ||
            (yearModuloFourHundred == 0)
       )

        cout<<year<<" is a valid leap year."<<endl;
    else
        cout<<year<<" is NOT a valid leap year."<<endl;

    return 0;
}
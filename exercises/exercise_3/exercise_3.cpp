/************************************************************************
 * Exercise 3
 * Author: Bryan Kim
 *
 * Objective: Given an input file of  integer years, determine if each year is a leap year.
 *
 * Assumption: An input file of years where each integer year is on a newline
 *
 * Output: Standard out indicating whether the user provided year is a leap year or not.
 *
 *
 *
************************************************************************/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main_e3(){
    //Declare variable to hold year values from input file
    int year;
    //Declare variable to hold the path to the input file and output file
    string inputPath;
    cout << "Please provide the path to the input file: ";
    cin >> inputPath;

    string outputPath;
    cout << "Please provide the path and filename for the output file: ";
    cin >> outputPath;

    //use ifstream to open input file
    ifstream inFile;
    //use ofstream to open an output file
    ofstream outFile;
    //Open the input file
    inFile.open(inputPath);
    //Check if the input file exists
    if (!inFile) {
        cout << "Cannot open the input file. Please check file/file location!" << endl;
        return 1;
    }
    outFile.open(outputPath);
    //Read years from the inFile.
    inFile >> year;
    while(inFile) {
        //Declare + Initialize some variables to hold the results of
        //year modulo 4, 100, and 400. We will use the modulo to determine if
        //a year is divisible by a certain value, where divisibility is indicated
        //by a 0 remainder
        int yearModuloFour = year % 4;
        int yearModuloHundred = year % 100;
        int yearModuloFourHundred = year % 400;
        if (
                ((yearModuloFour == 0) && (yearModuloHundred != 0)) ||
                (yearModuloFourHundred == 0)
           )
           outFile << year <<" is a valid leap year." << endl;
        else
           outFile << year <<" is NOT a valid leap year."<< endl;

        inFile >> year;
    }
    inFile.close();
    outFile.close();

    return 0;
}


/**
 * Lab 5
 * Author: Bryan Kim
 *
 * Objective: Implement ZIP to POSTNET code converter.
 *
 * Assumptions: I found this assignment to be pretty interesting because I think the inner workings of the postal system
 *              are fascinating. I did some reading online and learned that the half bar/full bar encoding is called
 *              "POSTNET". I went and looked at some of my own commercial mail to figure out what was going on there.
 *              One BIG assumption that I made is that there are no spaces between bars or digit groups - that's the
 *              way they appear on my mailings and on the USPS website.
 */

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

string getZipCode(); // Get zip code from user as string (so we can use array indexing)
int getNearestTensUp(int value); //Get the nearest number that is a multiple of 10 for the provided value, rounding up.
string determineCheckDigit(string zipCode); // From the provided ZIP code, determine the check digit
string encodeDigit(char digit); // Encode a digit to POSTNET Standards
string encodeZIP(string zip); //Encode a ZIP to POSTNET standards


int main()
{
    //Obtain the zip code from the user
    string zip = getZipCode();
    cout << "The zip you have provided is: " << zip << endl;
    //Determine the check value
    string zipPOSTNET = encodeZIP(zip);
    cout << "The POSTNET representation of the ZIP code is: " << zipPOSTNET << endl;
    return 0;
}

string getZipCode(){
    //Declare variable to hold ZIP input as string, and one to hold the final zip as Int.
    //We start with string so that we can implement some guard rails to guard against non-numeric values being entered.
    string zip;
    //First, print a message asking for the zip
    cout << "Hello! This application will encode a 5 digit ZIP to USPS POSTNET standards." << endl;
    cout << "Please provide a 5 digit ZIP code you wish to encode: ";
    cin >> zip;

    //Do a basic check to make sure that the ZIP provided is 5 digits
    int zipLen = zip.length();
    //Guardrails: Make sure that the user puts in some numeric input. Hence, the conditions we are guarding against here
    //are that the user puts in input that causes cin to fail, non-numeric input, or input that is not exactly 5 digits. Some testing in a C++
    //fiddle revealed that the "find_first_not_of" method on strings returns string::npos if it never finds a character not
    //within the set, which is how the final condition is set up.
    while (cin.fail() || zip.find_first_not_of("0123456789") != string::npos || zipLen != 5){

        cout << "You have provided an invalid input. ZIP code must be a 5 digit number." << endl;
        cout << "Please provide a 5 digit ZIP code: ";
        cin.clear();
        cin.ignore(256,'\n');
        cin >> zip;
        //Update zip length
        zipLen = zip.length();
    }
    return zip;
}

int getNearestTensUp(int value){
    //First check if the value is already a multiple of 10.
    if(value % 10 == 0){
        return value;
    } else {
        return (10 - (value % 10)) + value;
    }
}

string determineCheckDigit(string zipCode){
    //Declare variable to hold integer ZIP code
    int zipAsInt;
    //First, make sure that the ZIP provided is valid
    if(zipCode.find_first_not_of("0123456789") != string::npos || zipCode.length() != 5){
        cout << "The ZIP code provided is invalid. Program is terminating!";
        exit(1);
    }
    //Convert to int
    zipAsInt = stoi(zipCode);
    //Declare some variables to hold modulus and sum of digits (sum initialized as 0)
    int modRes;
    int sumDigits = 0;
    //Sum digits
    while(zipAsInt > 0){
        modRes = zipAsInt % 10;
        sumDigits = sumDigits + modRes;
        //Exploiting integer division
        zipAsInt = zipAsInt/10;
    }
    //Get nearest tens value number, rounding up (so that there is something to add, rather than subtract)
    int nearestTens = getNearestTensUp(sumDigits);
    //Return the check value, which is the nearestTens value minus the ZIP sum
    int checkValue = nearestTens-sumDigits;
    return to_string(checkValue);
}

string encodeDigit(char digit) {
    //This is a perfect setup for switch usage.
    switch (digit){
        case '0':
            return "||:::";
            break;
        case '1':
            return ":::||";
            break;
        case '2':
            return "::|:|";
            break;
        case '3':
            return "::||:";
            break;
        case '4':
            return ":|::|";
            break;
        case '5':
            return ":|:|:";
            break;
        case '6':
            return ":||::";
            break;
        case '7':
            return "|::|";
            break;
        case '8':
            return "|::|:";
            break;
        case '9':
            return "|:|::";
            break;
    }
}

string encodeZIP(string zip) {
    //First, determine the check value that will be present at the end
    string checkValue = determineCheckDigit(zip);
    //Create a string with the first frame bar to hold the results of converting the ZIP to POSTNET code
    string postnetZIP = "|";
    //Strings having array indexing implies that you should be able to loop over them.
    for(int i = 0; i < zip.length(); i++) {
        //First get the char
        char zipDigit = zip[i];
        //Next, get the POSTNET representation
        string zipDigitPOSTNET = encodeDigit(zipDigit);
        //Concatenate to the string holding the POSTNET Zip
        postnetZIP = postnetZIP + zipDigitPOSTNET;
    }
    //Now, concatenate on the check digit
    //Make sure the check digit is a single digit (something went wrong otherwise!)
    if(checkValue.length() != 1){
        cout << "The check value is greater than 9. Something is wrong. The program terminates!";
        exit(1);
    }
    //If all is good to go, use array indexing to grab the digit
    postnetZIP = postnetZIP + encodeDigit(checkValue[0]);
    //Finally, concatenate on the final frame bar.
    return postnetZIP + "|";
}
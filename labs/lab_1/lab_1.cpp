#include <iostream>

/************************************************************************

 * Author: Bryan Kim
 * Date: 10 June 2021
 *
 * Objective: Write a program that computes the sum of the first 10 positive integers.
 * Output: Print the sum of the first 10 positive integers to standard out.
 * The sum of the first ten positive integers is 55.
 *
************************************************************************/

int main() {
    //Declare an integer variable
    int sum;

    //Assign the sum of the first ten positive integers to the integer variable
    sum = 1+2+3+4+5+6+7+8+9+10;

    std::cout << "The sum of the first ten positive integers is: "<< sum << std::endl;
    return 0;
}

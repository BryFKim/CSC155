#include <iostream>

/************************************************************************
 * Author: Bryan Kim
 * Date: 10 June 2021
 *
 * Objective: Compute the product of 10,100,1000,10000.
 *            Next, see what happens if you multiply the above
 *            product by the the succeeding power of 10.
 *
 * Output: The product of 10,100,1000,10000, and also
 * that product multiplied by 100000.
 *
 * Answer to "What happens when you multiple the previous
 * product (10*100*1000*10000) by the succeeding power of
 * 10 (i.e., 100000)?": Assume that you declared the variable
 * to hold the result of 10*100*1000*10000*100000 as "int".
 *
 * What you would find if you tried to initialize this variable
 * with the result of 10*100*1000*10000*100000 is not one quadrillion as
 * expected, but a completely different (and incorrect value). This is
 * because you would have exceeded the range of value that can be stored by
 * the integer (int) datatype.
 *
 * For what it's worth, it appears that 10*100*1000*10000 (which is 10 billion)
 * also exceeds the signed and unsigned int ranges (which is 2147483647/
 * approx 2.15 billion or 4294967295/approx 4.29 billion, respectively).
 *
 * The solution here is to declare a variable to store the result of these products
 * that has a larger storage space, such as "long long".
 *
 *
 *
************************************************************************/

int main() {
    //Declare variable to hold the value of 10*100*1000*10000
    long long productOne;
    //Declare vairable to hold the value of 10*100*1000*10000*100000
    long long productTwo;

    //Declare and initialize values for each of the operands
    long long ten = 10;
    long long hundred = 100;
    long long thousand = 1000;
    long long tenThousand = 10000;
    long long hundredThousand = 100000;

    //Initialize productOne with result of 10*100*1000*10000
    productOne = ten*hundred*thousand*tenThousand;

    std::cout << "The result of 10*100*1000*10000 is:" << productOne << std::endl;

    //Initialize productTwo with result of productOne times 100000
    productTwo  = productOne * hundredThousand;

    std::cout << "The result of 10*100*1000*10000*100000 is:" << productTwo << std::endl;
    return 0;
  }
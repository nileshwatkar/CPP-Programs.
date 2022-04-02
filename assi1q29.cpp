/*29. Write a program in C++ to compute quotient and remainder.
Sample Output:
Compute quotient and remainder :
-------------------------------------
Input the dividend : 25
Input the divisor : 3
The quotient of the division is : 8
The remainder of the division is : 1*/


#include <iostream>
using namespace std;

int main()
{
        int quotient, divisor, dividend,remainder;

            cout << "\n\n\n Compute quotient and remainder";
            cout << "\n\n-------------------------------------";


                cout<<"\nInput the dividend : ";
                cin>>dividend;

                cout<<"\nInput the divisor : ";
                cin>>divisor;

                    quotient=dividend / divisor;
                    remainder=dividend % divisor;

                        cout<<"\nThe quotient of the division is : "<< quotient;
                        cout<<"\nThe remainder of the division is : "<< remainder;

        return 0;
}

/* The Output is mentioned below

Compute quotient and remainder

-------------------------------------
Input the dividend : 25

Input the divisor : 3

The quotient of the division is : 8
The remainder of the division is : 1*/

/*32. Write a program in C++ to check whether a number is positive, negative or
zero.
Sample Output:
Check whether a number is positive, negative or zero :
-----------------------------------------------------------
Input a number : 8
The entered number is positive.*/


#include <iostream>
using namespace std;

int main()
{
    long number=0;

        cout << "\n\n Check whether a number is positive, negative or zero :\n";
        cout << "-----------------------------------------------------------\n";

            cout <<"\nInput a number : ";
            cin >> number;

                if(number> 0)
                    {
                        cout <<"\nThe entered number is positive.\n\n";
                    }

                else if(number< 0)
                    {
                        cout <<"\nThe entered number is negative.\n\n";
                    }
                else
                    {
                        cout << " The number is zero.\n\n";
                    }
return 0;
}

/* The Output is mentioned below

Check whether a number is positive, negative or zero :
-----------------------------------------------------------

Input a number : 8

The entered number is positive.*/

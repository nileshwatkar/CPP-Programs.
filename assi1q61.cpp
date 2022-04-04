/*61. Write a C++ program to swap first and last digits of any number.
Sample Output:
Input any number: 12345
The number after swapping the first and last digits are: 52341*/


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int number,first,last,sum,digits,number1,a,b;

            cout<< "\n\n Find the number after swapping the first and last digits:\n";
            cout<< "\n-------------------------------------------------------------\n";

                cout<< " Input any number: ";
                cin >>number;

                    digits=(int)log10(number);
                    first=number/pow(10,digits);
                    last=number%10;

                    a=first*(pow(10,digits));
                    b=number%a;
                    number=b/10;

                    number1=last*(pow(10, digits))+(number*10+first);

                        cout <<"\nThe number after swaping the first and last digits are:"<<number1;
return 0;
}

/*Output:
 Find the number after swapping the first and last digits:

-------------------------------------------------------------
 Input any number: 12345

The number after swaping the first and last digits are:52341
*/

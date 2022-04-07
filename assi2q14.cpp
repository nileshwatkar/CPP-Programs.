//C++ Program to Find GCD

#include <iostream>
using namespace std;

int main()
{
    int num1,num2,gcd;

        cout<< "\n\n Find the Greatest Common Divisor of two numbers:\n";
        cout<< "-----------------------------------------------------\n";

                cout<< " Input the first number: ";
                cin>> num1;

                cout<< " Input the second number: ";
                cin>>num2;

                for(int i=1;i<=num1 && i<=num2;i++)

                {

                    if (num1 % i == 0 && num2 % i == 0)
                    {
                        gcd = i;
                    }
                }
                    cout<< "The Greatest Common Divisor is: "<<gcd<< endl;
return 0;
}
/*
 Find the Greatest Common Divisor of two numbers:
-----------------------------------------------------
 Input the first number: 10
 Input the second number: 30
The Greatest Common Divisor is: 10
*/

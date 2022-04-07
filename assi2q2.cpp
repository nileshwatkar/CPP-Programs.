//C++ Program to Find Quotient and Remainder


#include <iostream>
using namespace std;

int main()
{
    int divisor,dividend,quotient,remainder;

            cout<<"\nEnter First Number: ";
            cin>>dividend;

            cout<<"\nEnter Second Number: ";
            cin>>divisor;

                quotient=dividend/divisor;
                remainder=dividend%divisor;

                    cout<<"Quotient = " <<quotient << endl;
                    cout<<"Remainder = " <<remainder;
return 0;
}

/*
Enter First Number: 2

Enter Second Number: 3
Quotient = 0
Remainder = 2*/

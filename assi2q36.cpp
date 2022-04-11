//C++ Program to Convert Octal Number to Decimal and vice-versa



#include <iostream>
#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
   int octalNumber;
   cout << "Enter an octal number: ";
   cin >> octalNumber;
   cout << octalNumber << " in octal = " << octalToDecimal(octalNumber) << " in decimal";

   return 0;
}

// Function to convert octal number to decimal
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}

/*

Enter an octal number: 2341
2341 in octal = 1249 in decimal
*/

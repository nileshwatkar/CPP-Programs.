//C++ Program to Find G.C.D Using Recursion

#include <iostream>
using namespace std;

int recursion(int no1, int no2) // finding GCD
{
    if (no2 != 0)
       return recursion(no2, no1 % no2);   // recursion
    else
       return no1;
}


int main()
{
   int num1, num2; // declaring avriables

   cout << "Enter two positive integers: ";
   cin >> num1 >> num2; // takinf=g avlue from user.

   cout << "G.C.D of " << num1 << " & " <<  num2 << " is: " << recursion(num1, num2);

   return 0;
}

/*
Enter two positive integers: 5
10
G.C.D of 5 & 10 is: 5
*/

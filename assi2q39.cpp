//C++ Program to Calculate Power Using Recursion

#include <iostream>
using namespace std;


int FindPower(int base, int power)
{
   if (power == 0)
   return 1;
   else
   return (base * FindPower(base, power-1));
}
int main()
{
   int base, power;
   cout<<"Enter the base";
   cin>>base;

   cout<<"enter  the power";
   cin>>power;
 //  int base = 3, power = 5;
   cout<<base<<" raised to the power "<<power<<" is "<<FindPower(base, power);
   return 0;
}
/*
Enter the base3
enter  the power5
3 raised to the power 5 is 243
*/

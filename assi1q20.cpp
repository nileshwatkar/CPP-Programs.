/*20. Write a program in C++ to convert temperature in Celsius to Fahrenheit.
Sample Output:
Convert temperature in Celsius to Fahrenheit :
---------------------------------------------------
Input the temperature in Celsius : 35
The temperature in Celsius : 35
The temperature in Fahrenheit : 95*/


#include<iostream>
using namespace std;

int main()
{

    float fahernheit,celsius;

        cout<<"\n\n Convert temperature in Celsius to Fahernheit:";
        cout<<"\n\n-----------------------------------------------------";

            cout<<"\n\n\n Input the temperature in Celsius:";
            cin>>celsius;

            fahernheit=(celsius*9.0)/5.0+32;

                cout<<"\n\n The Temperature in Celsius:"<<celsius;
                cout<<"\n The temperature in Fahernheit:"<<fahernheit;

return 0;

}


/* The Output is mentioned below
 Convert temperature in Celsius to Fahernheit:

-----------------------------------------------------


 Input the temperature in Celsius:35


 The Temperature in Celsius:35
 The temperature in Fahernheit:95*/

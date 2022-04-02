/*21. Write a program in C++ to convert temperature in Fahrenheit to Celsius.
Sample Output:
Convert temperature in Fahrenheit to Celsius :
---------------------------------------------------
Input the temperature in Fahrenheit : 95
The temperature in Fahrenheit : 95
The temperature in Celsius : 35*/

#include<iostream>
using namespace std;

int main()
{

    float fahernheit,celsius;

        cout<<"\n\n Convert temperature in Celsius to Fahernheit:";
        cout<<"\n\n-----------------------------------------------------";

            cout<<"\n\n\n Input the temperature in Celsius:";
            cin>>fahernheit;

            celsius=((fahernheit*5.0)-(5.0*32))/9;

                cout<<"\n\n The Temperature in fahernheit:"<<fahernheit;
                cout<<"\n The temperature in Celsius:"<<celsius;

return 0;

}


/* The Output is mentioned below

 Convert temperature in Celsius to Fahernheit:

-----------------------------------------------------


 Input the temperature in Celsius:95


 The Temperature in fahernheit:95
 The temperature in Celsius:35*/

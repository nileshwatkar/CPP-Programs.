/*26. Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300*/


#include<iostream>
using namespace std;

int main()
{

    float fahrenheit,kelvin;

        cout<<"\n\n\n Convert temperature in Fahrenheit to Kelvin : ";
        cout<<"\n\n-----------------------------------------------------";

            cout<<"\n Input the temperature in Fahrenheit : ";
            cin>>fahrenheit;

            kelvin=(5.0/9)*(fahrenheit-32)+273.15; //formula for the converting fahrenhiet into kelvin

                cout<<"\n The temperature in Fahrenheit : "<<fahrenheit;
                cout<<"\n The temperature in Kelvin :"<<kelvin;
return 0;
}

/* The Output is mentioned below

Convert temperature in Fahrenheit to Kelvin :

-----------------------------------------------------
 Input the temperature in Fahrenheit : 80.33

 The temperature in Fahrenheit : 80.33
 The temperature in Kelvin :300

 */






/*25. Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85*/



#include<iostream>                               //(kelvin-273.15)+32
using namespace std;

int main()
{

    float kelvin,celsius;

        cout<<"\n\n Convert temperature in Kelvin to Celsius:";
        cout<<"\n\n-----------------------------------------------------";

            cout<<"\n\n\n Input the temperature in Kelvin :";
            cin>>kelvin;//input for kelvin

            celsius=kelvin-273.15;//formula for converting kelvin to celsius

                cout<<"\n\n The Temperature in Kelvin:"<<kelvin;
                cout<<"\n The temperature in Celsius:"<<celsius;

return 0;

}

/* The Output is mentioned below

Convert temperature in Kelvin to Celsius:

-----------------------------------------------------


 Input the temperature in Kelvin :300


 The Temperature in Kelvin:300
 The temperature in Celsius:26.85
 */

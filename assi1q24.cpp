/*24. Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33*/


#include<iostream>
using namespace std;

int main()
{

    float kelvin,fahrenheit;

        cout<<"\n\n\n Convert temperature in Kelvin to Fahrenheit ";
        cout<<"\n\n--------------------------------------------------";

            cout<<"\n\n Input the temperature in Kelvin : ";
            cin>>kelvin;

            fahrenheit=(9.0/5)*(kelvin-273.15)+32;

                cout<<"\n The temperature in Kelvin :"<<kelvin;
                cout<<"\n The temperature in Fahrenheit :"<<fahrenheit;

return 0;

}
/* The Output is mentioned below

 Convert temperature in Kelvin to Fahrenheit

--------------------------------------------------

 Input the temperature in Kelvin : 300

 The temperature in Kelvin :300
 The temperature in Fahrenheit :80.33
 */

/*27. Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/





#include <iostream>
using namespace std;

int main()
{
    float kelvin, celsius;

		cout << "\n\n\n Convert temperature in Celsius to Kelvin\n";
		cout << "\n\n---------------------------------------------------\n";

            cout << " Input the temperature in Celsius : ";
            cin >> celsius;

            kelvin = celsius + 273.15;

                cout << "\nThe temperature in Celsius : " << celsius;
                cout << "\nThe temperature in Kelvin : " << kelvin;

    return 0;
}


/* The Output is mentioned below

 Convert temperature in Celsius to Kelvin


---------------------------------------------------
 Input the temperature in Celsius : 26.85

The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/

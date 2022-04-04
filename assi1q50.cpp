/*50. Write a program in C++ to enter length in centimeter and convert it into meter
and kilometer.
Sample Output:
Convert centimeter into meter and kilometer :
--------------------------------------------------
Input the distance in centimeter : 250000
The distance in meter is: 2500
The distance in kilometer is: 2.5 */

#include<iostream>
using namespace std;

int main()
{
    float kilometer, meter,centimeter;

        cout << "\n\n Convert centimeter into meter and kilometer :";
        cout << "\n\n--------------------------------------------------";

            cout << "\nInput the distance in centimeter : ";
            cin >> centimeter;

                meter = (centimeter/100);
                kilometer = (centimeter/100000);

                        cout << "\nThe distance in meter is: "<< meter;
                        cout << "\nThe distance in kilometer is: "<< kilometer;
return 0;
}


/* Output:

 Convert centimeter into meter and kilometer :

--------------------------------------------------
Input the distance in centimeter : 250000

The distance in meter is: 2500
The distance in kilometer is: 2.5

*/

/*47. Write a program in C++ to find the area of any triangle using Heron's
Formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 6
Input the length of 3rd side of the triangle : 7
The area of the triangle is : 14.6969*/



#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float sidea, sideb, sidec, area, sd;
		cout << "\n\n Find the area of any triangle using Heron's Formula :\n";
		cout << "----------------------------------------------------------\n";

            cout<<" Input the length of 1st side  of the triangle : ";
            cin>>sidea;

            cout<<" Input the length of 2nd side  of the triangle : ";
            cin>>sideb;

            cout<<" Input the length of 3rd side  of the triangle : ";
            cin>>sidec;

            sd= (sidea+sideb+sidec)/2;
            area = sqrt(sd*(sd-sidea)*(sd-sideb)*(sd-sidec));

                cout<<" The area of the triangle is : "<< area << endl;
                cout << endl;
        return 0;
}

/* Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
 Input the length of 1st side  of the triangle : 5
 Input the length of 2nd side  of the triangle : 6
 Input the length of 3rd side  of the triangle : 7
 The area of the triangle is : 14.6969
*/

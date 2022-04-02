/*. Write a program in C++ to find the area of any triangle using Heron's
Formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253*/


#include<iostream>
using namespace std;
#include<math.h>

int main()
{

    float sidea,sideb,sidec,area,herons;

        cout<<"\n\n Find the area of any triangle using Hero's Formula";
            cout<<"\n\n----------------------------------------------------";


                cout<<"\n\nInput the Length of 1st side of the triangle:";
                cin>>sidea;

                cout<<"\nInput the Length of 2st side of the triangle:";
                cin>>sideb;

                cout<<"\nInput the Length of 3st side of the triangle:";//
                cin>>sidec;

                herons=(sidea+sideb+sidec)/2;
                area= sqrt(herons*(herons-sidea)*(herons-sideb)*(herons-sidec));//herons formula for triangle

                cout<<"\n The area of the triangle is:"<<area;

return 0;

}



/* The Output is mentioned below


Find the area of any triangle using Hero's Formula

----------------------------------------------------

Input the Length of 1st side of the triangle:5

 Input the Length of 2st side of the triangle:5

 Input the Length of 3st side of the triangle:5

 The area of the triangle is:10.8253*/





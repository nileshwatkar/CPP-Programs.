/*19 Write a program in C++ to find the area and circumference of a circle.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159*/


#include<iostream>
using namespace std;

int main()
{

    float area,radius,circumference;

        cout<<"\n\nFind the area and circumference of any circle:";
        cout<<"\n\n\n-----------------------------------------------------";

            cout<<"\n\n Input the radius(1/2 of diameter) of a circle:";
            cin>>radius;

            circumference=2*3.14*radius;
            area=3.14*(radius*radius);

                cout<<"\n The area of the circle is: "<<area;
                cout<<"\n The circumference of the circle is: "<<circumference;

return 0;


}

/* The Output is mentioned below

Find the area and circumference of any circle:


-----------------------------------------------------

 Input the radius(1/2 of diameter) of a circle:5

 The area of the circle is: 78.5
 The circumference of the circle is: 31.4*/

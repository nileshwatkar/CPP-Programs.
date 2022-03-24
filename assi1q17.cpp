/*17. Write a program in C++ to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50*/



#include<iostream>
using namespace std;

int main()

{
    int length,width,perimeter,area;

        cout<<"\n\n Find below the Area and Perimeter of a Rectangle";

            cout<<"\n\n Input the length of the rectangle: ";
            cin>>length;//getting input for length

            cout<<"\n Input the Width of the rectangle: ";
            cin>>width;// getting input for Width

                area=(length*width); //formula for the area
                perimeter=2*(length+width);//formula for the perimeter

                    cout<<"\n The area of the rectangle is: "<<area;//output for The area of the rectangle
                    cout<<"\n The Perimeter of the rectangle is: "<<perimeter;//output for The perimeter of the rectangle

return 0;

}

/* The Output is mentioned below


Find below the Area and Perimeter of a Rectangle

 Input the length of the rectangle: 10

 Input the Width of the rectangle: 15

 The area of the rectangle is: 150
 The Perimeter of the rectangle is: 50*/



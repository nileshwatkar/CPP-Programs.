/*28. Write a program in C++ to find the area of Scalene Triangle.
Sample Output:
Find the area of Scalene Triangle :
----------------------------------------
Input the length of a side of the triangle : 5
Input the length of another side of the triangle : 6
Input the angle between these sides of the triangle : 6
The area of the Scalene Triangle is : 1.56793*/


#include <iostream>
#include<math.h>
using namespace std;

    int main()
    {
    	float area,sidea,sideb,angle;

            cout << "\n\n\n Find the area of Scalene Triangle\n";
            cout << "\n\n----------------------------------------\n";

            cout<<" Input the length of a side  of the triangle : ";
            cin>>sidea;

            cout<<" Input the length of another side  of the triangle : ";
            cin>>sideb;

            cout<<" Input the angle between these sides of the triangle : ";
            cin>>angle;

            area=(sidea*sideb*sin((3.14/180)*angle))/2;

                    cout<<" The area of the Scalene Triangle is : "<< area;
return 0;

}


/* The Output is mentioned below

 Find the area of Scalene Triangle


----------------------------------------
 Input the length of a side  of the triangle : 5
 Input the length of another side  of the triangle : 6
 Input the angle between these sides of the triangle : 6
 The area of the Scalene Triangle is : 1.56713*/

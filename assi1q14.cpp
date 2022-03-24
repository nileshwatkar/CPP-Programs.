/*14 Write a program in C++ to calculate the volume of a sphere.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 6
The volume of a sphere is : 904.32*/

#include<iostream>
using namespace std;

int main()

{
    int radius;
    float volumeSphere;


        cout<<"\n\n Calculate the volume of sphere";

        cout<<"\n\n Input the radius of a sphere:";
        cin>>radius; // we need to put input

        volumeSphere=(4*3.14*radius*radius*radius)/3;//formula for this is V= 4 divided by 3 into pi r3

        cout<<"\n The Volume of a Sphere is:"<<volumeSphere;


return 0;


}


/* Output is mentioned below

 Calculate the volume of sphere

 Input the radius of a sphere:6

 The Volume of a Sphere is:904.32



*/






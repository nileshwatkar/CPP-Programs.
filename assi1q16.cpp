/*16. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 6
Input the height of the cylinder : 8
The volume of a cylinder is : 904.32*/

#include<iostream>
using namespace std;

int main()
{

    int radius,height;
    float volumeofCylinder;

        cout<<"\n\n Calculate the Volume of a cylinder";

            cout<<"\n\n Input the radius of the cylinder:";
            cin>>radius; //input for thr radius of the cylinder

            cout<<"\n Input of the height of the cylinder:";
            cin>>volumeofCylinder;//input for the height of the Cylinder


                volumeofCylinder=3.14*radius*radius*height; //formula for the volume of the cylinder

                    cout<<"\n The Volume of a Cylinder is:"<<volumeofCylinder;//output of the volume of the cylinder using volumofCylinder variable

return 0;

}

/* The Output is mentioned below


 Calculate the Volume of a cylinder

 Input the radius of the cylinder:6

 Input of the height of the cylinder:8

 The Volume of a Cylinder is:4.74805e+08

 */

/*.15 Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125*/


#include<iostream>
using namespace std;

int main()
{

    int sideofCube;
    float volumeofCube;

        cout<<"\n\n Calculate the volume of a cube";

            cout<<"\n\n Input the side of a cube:";
            cin>>sideofCube;//side of cube

            volumeofCube=sideofCube*sideofCube*sideofCube; //this is the formula for the V=side*3

            cout<<"\n The Volume of Cube is:"<<volumeofCube;

return 0;
}

/* The Output is mentioned below

 Calculate the volume of a cube

 Input the side of a cube:5

 The Volume of Cube is:125
*/

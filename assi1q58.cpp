/*58. Write a program in C++ to print the area of a polygon.
Sample Output:
Print the area of a polygon:
---------------------------------
Input the number of sides of the polygon: 7
Input the length of each side of the polygon: 6
The area of the polygon is: 130.821*/



#include <iostream>
#include <math.h>
using namespace std;

int main()
{
        float areaofpolygon,sideofpolygon,numberofside;

                cout << "\n\n Print the area of a polygon:\n";
                cout << "\n---------------------------------\n";

                    cout << "\nInput the number of sides of the polygon: ";
                    cin>>numberofside;

                    cout << "\nInput the length of each side of the polygon: ";
                    cin>>sideofpolygon;

                    areaofpolygon=(numberofside*(sideofpolygon*sideofpolygon))/(4.0*tan((M_PI/numberofside)));

                        cout<<"\nThe area of the ploygon is: "<<areaofpolygon<<"\n";
return 0;
}


/*Output:
 Print the area of a polygon:

---------------------------------

Input the number of sides of the polygon: 7

Input the length of each side of the polygon: 6

The area of the ploygon is: 130.821
*/

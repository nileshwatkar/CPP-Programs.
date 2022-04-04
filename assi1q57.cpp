/*57. Write a program in C++ to print the area of a hexagon.
Sample Output:
Print the area of a hexagon:
---------------------------------
Input the side of the hexagon: 6
The area of the hexagon is: 93.5307*/


#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float areaofhexagon,sideofhexagon;

        cout << "\n\n Print the area of a hexagon:\n";
        cout << "\n---------------------------------\n";

            cout << "\nInput the side of the hexagon: ";
            cin>>sideofhexagon;

            areaofhexagon= (6*(sideofhexagon*sideofhexagon))/(4*tan(M_PI/6));

                cout<<"\nThe area of the hexagon is: "<<areaofhexagon<<"\n";

return 0;
}

/* Print the area of a hexagon:

---------------------------------

Input the side of the hexagon: 6

The area of the hexagon is: 93.5307*/

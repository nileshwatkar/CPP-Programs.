/*45. Write a program in C++ to calculate the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125*/

#include <iostream>
using namespace std;

int main()
{
    	int side;
    	float volumeofcube;

            cout << "\n\n Calculate the volume of a cube :\n";
            cout << "---------------------------------------\n";
                cout<<"\nInput the side of a cube : ";
                cin>>side;

                volumeofcube=(side*side*side);

                    cout<<"\nThe volume of a cube is : "<< volumeofcube;

        return 0;
}


/*Output:

 Calculate the volume of a cube :
---------------------------------------

Input the side of a cube : 5

The volume of a cube is : 125

*/

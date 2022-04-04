/*46. Write a program in C++ to calculate the volume of a cylinder.
Sample Output:
Calculate the volume of a cylinder :
-----------------------------------------
Input the radius of the cylinder : 4
Input the height of the cylinder : 8
The volume of a cylinder is : 401.92
*/

#include <iostream>
using namespace std;

int main()
{
    	int radius,height;
    	float volumeofcylinder;

            cout << "\n\n Calculate the volume of a cylinder :\n";
            cout << "-----------------------------------------\n";

                cout<<" Input the radius of the cylinder : ";
                cin>>radius;

                    cout<<" Input the height of the cylinder : ";
                    cin>>height;

            volumeofcylinder=(3.14*radius*radius*height);

                    cout<<" The volume of a cylinder is : "<< volumeofcylinder;
        return 0;
}

/* Output:

 Calculate the volume of a cylinder :
-----------------------------------------
 Input the radius of the cylinder : 4
 Input the height of the cylinder : 8
 The volume of a cylinder is : 401.92
 */

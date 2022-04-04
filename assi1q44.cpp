/*44. Write a language program to get the volume of a sphere with radius 6.
Sample Output:
Calculate the volume of a sphere :
---------------------------------------
Input the radius of a sphere : 5
The volume of a sphere is : 523.333*/


#include <iostream>
using namespace std;

int main()
{
    	int radius;
    	float volumeofsphere;

            cout << "\n\n Calculate the volume of a sphere :";
            cout << "\n---------------------------------------";

                cout<<" Input the radius of a sphere : ";
                cin>>radius;

                    volumeofsphere=(4*3.14*radius*radius*radius)/3;

                        cout<<"\nThe volume of a sphere is : "<< volumeofsphere;
return 0;
}
/*Output:
 Calculate the volume of a sphere :
--------------------------------------- Input the radius of a sphere : 5

The volume of a sphere is : 523.333
*/

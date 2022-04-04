/*52. Write a program in C++ to enter two angles of a triangle and find the third
angle.
Sample Output:
Find the third angle of a triangle :
-----------------------------------------
Input the 1st angle of the triangle : 35
Input the 2nd angle of the triangle : 35
The 3rd of the triangle is : 110*/


#include<iostream>
using namespace std;

int main()
{
    float angle1, angle2, angle3;

        cout << "\n\n Find the third angle of a triangle :\n";
        cout << "\n-----------------------------------------";

            cout<<" Input the 1st angle of the triangle : ";
            cin>>angle1;

            cout<<"\nInput the 2nd angle of the triangle : ";
            cin>>angle2;

                angle3=180-(angle1+angle2);

                    cout << "\nThe 3rd of the triangle is : " << angle3;
    return 0;
}

/* Output:
Find the third angle of a triangle :

----------------------------------------- Input the 1st angle of the triangle : 35

Input the 2nd angle of the triangle : 35

The 3rd of the triangle is : 110

*/

/*43. Write a language program which accepts the radius of a circle from the user
and compute the area and circumference.
Sample Output:
Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5
The area of the circle is : 78.5397
The circumference of the circle is : 31.4159*/




#include <iostream>
using namespace std;

    int main()
    {
            float radius, area, circum;

                cout << "\n\n Find the area and circumference of any circle :";
                cout << "\n----------------------------------------------------";

                    cout<<"\nInput the radius(1/2 of diameter) of a circle : ";
                    cin>>radius;

            circum = 2*3.14159*radius;
            area = 3.14159*(radius*radius);

                    cout<<"\nThe area of the circle is : "<< area;
                    cout<<"\nThe circumference of the circle is : "<< circum;
        return 0;
    }

/*Output:

 Find the area and circumference of any circle :
----------------------------------------------------
Input the radius(1/2 of diameter) of a circle : 5

The area of the circle is : 78.5397
The circumference of the circle is : 31.4159
*/

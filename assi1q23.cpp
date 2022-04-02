/*23. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 25
The 25 Km./hr. means 15.5343 Miles/hr*/


#include<iostream>
using namespace std;

int main()
{
    float miles,kilometer;

        cout<<"\n\n\n Convert kilometers per hour to miles per hour";
        cout<<"\n\n---------------------------------------------------------";

            cout<<"\n Input the distance in kilometer : ";
            cin>>kilometer;//input for kilometer

            miles=(kilometer*0.6213712);//kilometer per hour and 1 km is 0.6213712 miles so we multiplies kilometer with 0.6213712

                cout<<"The "<<kilometer<<"Km/hr"<<" means "<<miles<<" miles/hr";

return 0;

}


/* The Output is mentioned below

Convert kilometers per hour to miles per hour

---------------------------------------------------------
 Input the distance in kilometer : 25
The 25Km/hr means 15.5343 miles/hr
*/

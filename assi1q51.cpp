/*51. Write a program in C++ that converts kilometers per hour to miles per hour.
Sample Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
Input the distance in kilometer : 5
The 5 Km./hr. means 3.10686 Miles/hr.*/



#include<iostream>
using namespace std;

int main()
{
    float kilometerperhr, milesperhr;

            cout << "\n\n Convert kilometers per hour to miles per hour :\n";
            cout << "----------------------------------------------------\n";

                cout << " Input the distance in kilometer : ";
                cin >> kilometerperhr;

                    milesperhr = (kilometerperhr * 0.6213712);

                    cout << " The "<< kilometerperhr<<" Km./hr. means "<< milesperhr << " Miles/hr."<<"\n";

return 0;
}


/*Output:
Convert kilometers per hour to miles per hour :
----------------------------------------------------
 Input the distance in kilometer : 5
 The 5 Km./hr. means 3.10686 Miles/hr.
 */

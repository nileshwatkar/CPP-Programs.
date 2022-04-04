/*54. Write a program in C++ to enter P, T, R and calculate Simple Interest.
Sample Output:
Calculate the Simple Interest :
-----------------------------------
Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000
*/


#include<iostream>
using namespace std;

int main()
{
	int principleamount,rateofinterest,time,simpleinterest;

            cout << "\n\n Calculate the Simple Interest :\n";
            cout << " -----------------------------------\n";

                cout<<" Input the Principle: ";
                cin>>principleamount;

                cout<<" Input the Rate of Interest: ";
                cin>>rateofinterest;

                cout<<" Input the Time: ";
                cin>>time;

            simpleinterest=(principleamount*rateofinterest*time)/100;

cout<<" The Simple interest for the amount "<<principleamount<<" for "<<time<<" years @ "<<rateofinterest<<" % is: "<<simpleinterest<<"\n";

return 0;
}


/* Output:
 Calculate the Simple Interest :
 -----------------------------------
 Input the Principle: 20000
 Input the Rate of Interest: 10
 Input the Time: 1.5
 The Simple interest for the amount 20000 for 1 years @ 10 % is: 2000
 */

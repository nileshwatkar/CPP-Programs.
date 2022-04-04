/*55. Write a program in C++ to enter P, T, R and calculate Compound Interest.
Sample Output:
Calculate the Compound Interest :
------------------------------------- Input the Principle: 20000
Input the Rate of Interest: 10
Input the Time: 1.5
The Interest after compounded for the amount 20000 for 1.5 years @ 10
% is: 3073.8 The total amount after compounded for the amount 20000 for 1.5
years @
10 % is: 23073.8*/


#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float principleamount,rateofinterest,time,compundedamount,compoundedinterest;

		cout << "\n\n Calculate the Compound Interest :\n";
		cout << " -------------------------------------\n";

            cout<<" Input the Principle: ";
            cin>>principleamount;

            cout<<" Input the Rate of Interest: ";
            cin>>rateofinterest;

            cout<<" Input the Time: ";
            cin>>time;

                compundedamount=principleamount*pow((1+rateofinterest/100),time)-principleamount;
                compoundedinterest=principleamount*pow((1+rateofinterest/100),time);

cout<<" The Interest after compounded for the amount "<<principleamount<<" for "<<time<<" years @ "<<rateofinterest<<" % is: "<<compoundedinterest;

cout<<" The total amount after compounded for the amount "<<principleamount<<" for "<<time<<" years @ "<<rateofinterest<<" % is: "<<compundedamount;

return 0;
}


/*Output:


 Calculate the Compound Interest :
 -------------------------------------
 Input the Principle: 20000
 Input the Rate of Interest: 10
 Input the Time: 1.5
 The Interest after compounded for the amount 20000 for 1.5 years @ 10 % is: 23073.8 The total amount after compounded for the amount 20000 for 1.5 years @ 10 % is: 3073.79
 */

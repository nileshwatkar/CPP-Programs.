/*13. Write a program in C++ to swap two numbers.
Sample Output:
Swap two numbers :
-----------------------
Input 1st number : 25
Input 2nd number : 39
After swapping the 1st number is : 39
After swapping the 2nd number is : 25*/

#include<iostream>
using namespace std;

int main()
{

    int a,b,temp;

        cout<<"\n Input 1st number:";
        cin>>a;

        cout<<"\Input 2nd number:";
        cin>>b;

        temp=a; //we stores a value to temp ( now temp value is 25)
        a=b; // then we stored b value in to a( now a value is 39)
        b=temp; // the we swapped values (now b value is 39 and temp value 25)
  // because above explanation temp value is  25 and b value is 29 here is the values are swapped

            cout<<"\n After swapping the 1st number is:"<<a;
            cout<<"\n After swapping the 2nd number is:"<<b;

return 0;

}

/* The Output is find below

 Input 1st number:25
Input 2nd number:39

 After swapping the 1st number is:39
 After swapping the 2nd number is:25

*/



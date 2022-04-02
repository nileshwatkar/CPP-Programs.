/*31. Write a program in C++ to input a single digit number and print a rectangular
form of 4 columns and 6 rows.
Sample Output:
Make a rectangular shape by a single digit number :
--------------------------------------------------------
Input the number : 5
5555
5 5
5 5
5 5
5 5
5555*/


#include <iostream>
using namespace std;

int main()
{
    	int a;

            cout << "\n\n\n Make a rectangular shape by a single digit number";
            cout << "\n\n--------------------------------------------------------\n";

                cout<<"\nInput the number : ";
                cin>>a;
        cout<<"\n"<<a<<a<<a<<a;

        cout<<"\n"<<a<<" "<<" "<<a;

        cout<<"\n"<<a<<" "<<" "<<a;

        cout<<"\n"<<a<<" "<<" "<<a;

        cout<<"\n"<<a<<" "<<" "<<a;

        cout<<"\n"<<a<<a<<a<<a;
return 0;

}

/*The Output is mentioned below
Make a rectangular shape by a single digit number

--------------------------------------------------------

Input the number : 5

5555
5  5
5  5
5  5
5  5
5555
*/


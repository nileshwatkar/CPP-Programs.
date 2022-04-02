/*30. Write a program in C++ to compute the total and average of four numbers.
Sample Output:
Compute the total and average of four numbers :
----------------------------------------------------
Input 1st two numbers (separated by space) : 25 20
Input last two numbers (separated by space) : 15 25
The total of four numbers is : 85
The average of four numbers is : 21.25*/



#include <iostream>
using namespace std;

int main()
{
    	float number1,number2,number3,number4,total,average;

            cout << "\n\n\n Compute the total and average of four numbers :";
            cout << "\n\n----------------------------------------------------\n";

            cout<<"\nInput 1st two numbers (separated by space) : ";
            cin>> number1 >> number2;

            cout<<"\nInput last two numbers (separated by space) : ";
            cin>> number3 >> number4;

                total=number1+number2+number3+number4;
                average=total/4;

                    cout<<"\nThe total of four numbers is : "<< total;
                    cout<<"\nThe average of four numbers is : "<< average;

        return 0;
    }

/*The Output is mentioned below

 Compute the total and average of four numbers :

----------------------------------------------------

Input 1st two numbers (separated by space) : 25 20

Input last two numbers (separated by space) : 15 25

The total of four numbers is : 85
The average of four numbers is : 21.25*/

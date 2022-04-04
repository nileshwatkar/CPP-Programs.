/*48. Write a program in C++ which swap the values of two variables not using
third variable.
Sample Output:
Swap two numbers without using third variable:
---------------------------------------------------
Input 1st number : 25
Input 2nd number : 20
After swapping the 1st number is : 20
After swapping the 2nd number is : 25*/


#include <iostream>
using namespace std;

int main()
{
        int number1,number2, temp;

            cout << "\n\n Swap two numbers without using third variable:";
            cout << "\n\n---------------------------------------------------";

                cout << "\nInput 1st number : ";
                cin >> number1 ;

                cout << "\nInput 2nd number : ";
                cin >> number2;

                    number2=number2+number1;
                    number1=number2-number1;
                    number2=number2-number1;

                            cout << "\n\nAfter swapping the 1st number is : "<< number1;
                            cout << "\n\nAfter swapping the 2nd number is : "<< number2;
return 0;
}

/* Output:
Swap two numbers without using third variable:

---------------------------------------------------
Input 1st number : 25

Input 2nd number : 20


After swapping the 1st number is : 20

After swapping the 2nd number is : 25

*/

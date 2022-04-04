/*69. Write a C++ program to read an integer n and prints the factorial of n,
assume that n = 10.*/

#include <iostream>
using namespace std;

    long long factorial(int number)
{

            if (number==0)
                {

            return 1;
                }

            else
                {
                    return number*factorial(number-1);
                }
}

int main()
{
    int number;
    cout<<"\nEnter the number";
    cin>>number;
    cout<<"\n"<<factorial(number);
}

/*Output:

Enter the number10

3628800
*/

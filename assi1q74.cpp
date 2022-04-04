/*74. Write a C++ program that accepts various numbers and compute the
difference between the highest number and the lowest number. All input numbers
should be real numbers between 0 and 1,000,000. The output (real number) may
include an error of 0.01 or less.*/

#include <iostream>
using namespace std;
int main()
{
    double number[52];
    int number1=0;
            cout<<"\n Enter the numbers";
            cin>>number[number1++];

            (number,number+number1-1);

                cout <<"\nDifference between the highest number and the lowest number: ";
                cout<<number[number1-2]-number[0]<<endl;
}

/*Output:

Enter the numbers2

Difference between the highest number and the lowest number: 1.41314e+231
*/

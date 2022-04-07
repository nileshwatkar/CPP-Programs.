//C++ Program to Display Armstrong Number Between Two Intervals



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int i,min,max,temp1,temp2,num=0,rem,sum=0;


        cout << "Enter the first number: ";
        cin >> min;

        cout << "Enter the last number: ";
        cin >> max;

        cout << "Armstrong numbers between " << min << " to " << max << " are: "<< endl;

            for (i = min; i < max; i++)
        {
            temp1 = i;
            temp2 = i;

            while (temp1 != 0)
                {
            temp1 = temp1 / 10;
            num++;
                }

            while (temp2 != 0)
                {
            rem = temp2 % 10;
            sum = sum + pow(rem, num);
            temp2 = temp2 / 10;
                }


        if (sum == i)   //  // Checking for armstrong number
            {
            cout << i << endl;
            }
                num = 0;
                sum = 0;

        }
    return 0;
}

/*Enter the first number: 2
Enter the last number: 5
Armstrong numbers between 2 to 5 are:
2
3
4
*/

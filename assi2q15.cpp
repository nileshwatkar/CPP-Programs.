//C++ Program to Find LCM

#include <iostream>
using namespace std;
int main()

{
    int num1,num2,max;

            cout<<"Enter two numbers: "; // taking two numbers
            cin>>num1>>num2;

            max = (num1 > num2) ? num1 : num2; // finding bigger number

            while (1)
                {
                    if (max % num1 == 0 && max % num2 == 0) // condition for lcm
                        {

                        cout<<"The LCM of "<<num1<<" and "<<num2 <<" is "<<max;
                        break;
                        }
                            ++max;
                }
return 0;
}

/*Enter two numbers: 2
3
The LCM of 2 and 3 is 6*/

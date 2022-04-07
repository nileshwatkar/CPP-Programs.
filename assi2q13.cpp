//C++ Program to Display Fibonacci Series

#include<iostream>
using namespace std;
int main()
{

    int n,i,a=0,b=1,c;// declare variables


              cout << "Enter the number: "; // take input
              cin >> n;


              cout << "Fibonacci Series is: " << endl;// display Fibonacci Series
                for (i=a; i<=n; i++)
                    {
                        cout << a << "  ";
                        c=a+b;
                        a=b;
                        b=c;
                    }

return 0;
}
/*Enter the number: 20
Fibonacci Series is:
0  1  1  2  3  5  8  13  21  34  55  89  144  233  377  610  987  1597  2584  4181  6765*/

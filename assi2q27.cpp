//C++ Program to Display Factors of a Number

#include <iostream>
using namespace std;

int main()
{
    int n, i;

    cout << "Enter the number: ";
    cin >> n;

    cout << "Factors of " << n << " are: ";
    for(i = 1; i <= n; ++i)
    {

            if(n % i == 0)
            cout<< i << " ";
    }

    return 0;
}

/*Enter the number: 20
Factors of 20 are: 1 2 4 5 10 20
*/

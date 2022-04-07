//C++ Program to Check Whether a Number is Prime or Not

#include <iostream>
using namespace std;

int main()
{
    int n, i, c = 0;

    cout << "Enter the number: "; cin>>n;

    for (i = 1; i <= n; i++)
        {
                if (n % i == 0)
            {
                c++;
            }
        }

            if (c == 2)
            {
                cout << " is a Prime number" << endl;
            }
            else
            {
                cout << " is not a Prime number" << endl;
            }
    return 0;
}

/*
Enter the number: 5
 is a Prime number*/

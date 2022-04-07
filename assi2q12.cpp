//C++ Program to Generate Multiplication Table

#include <iostream>
using namespace std;

int main()
{
    int number;

        cout<< "Enter a number: ";
        cin>>number;

            for(int i=1;i<=10;++i)
                    {

                cout<<number<<" * "<<i<<" = "<<number    * i<< endl;
                    }

return 0;
}
/*Enter a number: 2
2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
2 * 10 = 20*/

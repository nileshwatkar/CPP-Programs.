//C++ Program to Find Factorial

#include <iostream>
using namespace std;

int main()
    {
        int number,factorial, i;

            cout<<"\n Enter the number";
            cin>>number;

        for(i=1;i<=number; i++)

            factorial=factorial*i;

            cout<<"Factorial of "<<number<<" is "<<factorial;
   return 0;
}

/*
Enter the number4
Factorial of 4 is 100807176
*/

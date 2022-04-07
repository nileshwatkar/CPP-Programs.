//C++ Program to Find Largest Number Among Three Numbers

#include <iostream>
using namespace std;

int main()
{

   int a,b,c;

     cout<<"\n Enter the first number: ";
     cin>>a;

     cout<<"\n Enter the first number: ";
     cin>>b;

     cout<<"\n Enter the first number: ";
     cin>>c;

      if(a>b)
            {
            if(a>c)

            cout<<a<<" is largest number";

            else

            cout<<c<<" is largest number";
            }
            else

            {
                if(b>c)

                cout<<b<<" is largest number"<<endl;
            else

                cout<<c<<" is largest number"<<endl;
}
return 0;
}

/*
Enter the first number: 2

 Enter the first number: 3

 Enter the first number: 7
7 is largest number
*/

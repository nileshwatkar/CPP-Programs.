//C++ Program to Swap Two Numbers


#include <iostream>
using namespace std;

int main()
{

    int a,b;

         cout<<"\n Enter The numbers"<<endl;
         cin>>a>>b;

            cout<<"Before swapping."<< endl;
            cout<<"a = " << a<< ",b= "<<b<<endl;

                    a=a+b;
                    b=a-b;
                    a=a-b;

                    cout <<"\nAfter swapping."<< endl;
                    cout <<"a = " << a << ", b = " <<b<<endl;

    return 0;
}

/*
Enter The numbers
1
2
Before swapping.
a = 1,b= 2

After swapping.
a = 2, b = 1
*/

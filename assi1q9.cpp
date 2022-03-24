//Write a program in C++ to display the operation of pre and post increment and decrement.

#include<iostream>
using namespace std;

int main()
{

    int a=57;

    cout<<"\n The number is:"<<a;

    a++;
    cout<<"\n After post increment by 1 the number is:"<<a;

    ++a;
    cout<<"\n After pre increment by 1 the number is:"<<a;

    a=a+1;
    cout<<"\n after increasing by 1 the number is"<<a;

    a--;
    cout<<"\n After post decrement by 1 the number is"<<a;

    --a;
    cout<<"\n After pre decrement by 1 the number is"<<a;

    a=a-1;
    cout<<"\n After decreasing by the 1 the number is"<<a;


return 0;
}

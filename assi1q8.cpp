//Write a program in C++ to check overflow/underflow during various arithmetical operation.

#include<iostream>
using namespace std;

int main()

{
    int a=2147483647;
    int b=-2147483648;

    cout<<"\n\n\n---------------------------------------------------------------------";

    cout<<"\n\n\n***** Overflow/Underflow during various arithmetical operations*****";

    cout<<"\n\n\n\+++++++++++++++Below Operations are Performed+++++++++++++++++++";

    cout<<"\n\n\n Overflow the integer range and set in minimum range:"<<a+1;
    cout<<"\n\n Increasing from its minimum range:"<<a+2;
    cout<<"\n\n The Product is:"<<a*a;

    cout<<"\n\n\n---------------------------------------------------------------------";

    cout<<"\n\n\n Underflow the range and set in maximum range:"<<b+1;
    cout<<"\n\n Decreasing from its maximum range:"<<b+2;
    cout<<"\n\n The Product is:"<<b*b;

    cout<<"\n\n\n---------------------------------------------------------------------";

 return 0;


}

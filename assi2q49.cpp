//C++ Program to Swap Numbers in Cyclic Order Using Call by Reference


#include <iostream>

using namespace std;

//To swaping the numbers
void  swapNumber(int *a,int *b, int *c)
{
    int temp;
    temp = *a;
    *a=*c;
    *c=*b;
    *b=temp;
}
int main()
{
    int a,b,c;
    cout << "Enter number to be swapped" << endl;
    cin>>a>>b>>c;

        cout<<"Number a,b and c respectively before swapNumber\n"<<a<<","<<b<<","<<c <<endl;

        swapNumber(&a,&b,&c);

            cout<<"Number a,b and c respectively after swapNumber\n"<<a<<","<<b<<","<<c <<endl;
return 0;
}

/* Output:

Enter number to be swapped
1
2
3
Number a,b and c respectively before swapNumber
1,2,3
Number a,b and c respectively after swapNumber
3,1,2

*/

/* 8 C++ Program to find sum of elements in a given array
int arr[] = {'1','3','7'};*/


/*#include<iostream>
using namespace std;

int main()
{

    int sum=0,arr[];
        cout<<"Enter the array element";
    for(int i=0;i<=3;i++)
    {
        sum=sum+arr[i];

    }
        cout<<"\n The sum of array"<<sum;
}
*/
#include <iostream>
using namespace std;

int main()
{

    int i,n,sum=0;
    int arr[]={1,3,7};

        for(i=0;i<3;i++)
            {
            sum+=arr[i];
            }

            cout<<"\n The sum is:"<<sum;
return 0;
}

//Output: The sum is:11

/* 9 C++ program to find largest element in an array
int arr[] = {'1','3','7'};*/



#include <iostream>
using namespace std;
int main() {

int a[] = {1,3,7};

   int i, position;
   int Max=a[0];

        for(i=1; i<5; i++)
            {

            if(a[i]>Max)
                {

            Max = a[i];
                                    //position = i;
                }
            }
                cout<<"The largest element in the array is "<<Max;//<<" and it is at index "<<position;
return 0;
}


//output: The largest element in the array is 7

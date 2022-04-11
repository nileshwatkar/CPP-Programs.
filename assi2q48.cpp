//C++ Program to Access Elements of an Array Using Pointer
#include <iostream>
using namespace std;

int main()
{

   int arr[5];
    int *ptr = &arr[2];

        cout<<"Enter The Element";

            for(int i=0;i<5;++i)
                cin>>arr[i];

        cout<<"The value in the second index of the array is: "<< *ptr;

return 0;
}


/*Output:
Enter The Element5
2
9
4
1
*/

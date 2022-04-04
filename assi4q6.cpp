//6 find factorial


#include <iostream>
using namespace std;
int main()
{
   int i,factorial=1,number;

        cout<<"Enter any Number: ";
        cin>>number;

            for(i=1;i<=number;i++)
                {

            factorial=factorial*i;
                }
  cout<<"\nFactorial of " <<number<<" is: "<<factorial;

return 0;
}


/*Output:

Enter any Number: 5

Factorial of 5 is: 120
*/

//7 check charcter is vowel or constant

#include <iostream>
using namespace std;
int main()
{
   char c;

        cout<<"\nEnter the character:";
        cin>>c;

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' )
        cout <<c<< " is a Vowel" << endl;

        else
            cout <<c<< " is a Consonant" << endl;
   return 0;
}


/* Output:

Enter the character:a
a is a Vowel
*/

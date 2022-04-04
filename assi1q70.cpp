/*70. Write a C++ program to replace all the lower-case letters of a given string
with the corresponding capital letters.*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
        string text;

        cout<<"\nEnter the String:";
        getline(cin,text);

        transform(text.begin(),text.end(),text.begin(),::toupper);

            cout<<text;
return 0;
}


/* Output:

Enter the String:Nilesh
NILESH

*/

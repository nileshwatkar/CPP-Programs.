//C++ Program to Find the Frequency of Characters in a String

#include <iostream>
using namespace std;

int main()
{
    string strng; // declaring variables
    char ch;

    int i,count = 0;

    cout<<"enter any string ";
    cin>>strng; // getting a string from user.

        cout<<" enter character to find frequency";
        cin>>ch;

            for ( i = 0; i < strng.size(); i++)
        {
                if (strng[i] ==  ch) // finding frequency of a given character.
            {
                count++;
            }
        }
            cout << "Number of frequency of " << ch << " = " << count;
return 0;
}

/*Output:
enter any string NileshWatkar
 enter character to find frequency W
Number of frequency of W = 1
*/

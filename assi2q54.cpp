//C++ Program to Concatenate Two Strings

#include <iostream>
using namespace std;

int main()
{
    string string1, string2, concatenation;

        cout << "Enter string s1: ";
        getline (cin, string1);

            cout << "Enter string s2: ";
            getline (cin, string2);

                concatenation = string1 + string2;

    cout <<" Concatenate String is= "<< concatenation;

    return 0;
}

/*Output:
Enter string s1: My name is
Enter string s2: Nilesh Watkar
 Concatenate String is= My name is Nilesh Watkar
 */

/*42. Write a language program in C++ which accepts the user's first and last
name and print them in reverse order with a space between them.
Sample Output:
Print the name in reverse where last name comes first:
-----------------------------------------------------------
Input First Name: Alexandra
Input Last Name: Abramov
Name in reverse is: Abramov Alexandra*/


# include <iostream>
# include <string>
using namespace std;
int main()

{
        char firstname[30], lastname [30];

                cout << "\n\n\n Print the name in reverse where last name comes first:";
                cout << "\n-----------------------------------------------------------";

                cout << " Input First Name: ";
                cin >> firstname;

                cout << " Input Last Name: ";
                cin >> lastname;

                    cout << "\nName in reverse is: "<< lastname << " "<< firstname;
return 0;
}

/*Output:

Print the name in reverse where last name comes first:
----------------------------------------------------------- Input First Name: Alexandra
 Input Last Name: abramoy

Name in reverse is: abramoy Alexandra
*/

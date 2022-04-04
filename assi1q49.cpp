/*49. Write a program in C++ to print the code (ASCII code / Unicode code etc.) of
a given character.
Sample Output:
Print code (ASCII code / Unicode code etc.) of a given character:
-----------------------------------------------------------------------
Input a character: a
The ASCII value of a is: 97
The character for the ASCII value 97 is: a*/


#include <iostream>
using namespace std;
int main()
{
    char ascii;
	cout << "\n\n Print code (ASCII code / Unicode code etc.) of a  given character:\n";
	cout << "-----------------------------------------------------------------------\n";
 	cout << " Input a character: ";
	    cin >> ascii;

  cout <<" The ASCII value of "<<ascii<<" is: " <<(int)ascii <<"\n";
  cout <<" The character for the ASCII value "<<(int)ascii <<" is: "<<(char)((int)ascii)<<"\n";
  return 0;
}

/*Output:

Print code (ASCII code / Unicode code etc.) of a  given character:
-----------------------------------------------------------------------
 Input a character: a
 The ASCII value of a is: 97
 The character for the ASCII value 97 is: a
 */

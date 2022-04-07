//C++ Program to Check Whether a character is Vowel or Consonant.

#include <iostream>
using namespace std;

int main() {

   char c;

            cout<<"\n Enter the character:";
            cin>>c;

        if (c =='a'||c=='e'||c=='i'||c=='o'||c =='u')

            cout <<c<< " is a Vowel" << endl;
        else

            cout <<c<< " is a Consonant" << endl;
return 0;
}

/*
Enter the character:a
a is a Vowel
*/

//C++ Program to Find the Length of a String
#include <iostream>
using namespace std;

int main() {
    string str;

        cout<<"\n Enter the String";
        getline(cin,str);


    // you can also use str.length()
    cout << "String Length = " << str.size();

    return 0;
}


/*Output:
 Enter the String I am a Struggler
String Length = 17
*/

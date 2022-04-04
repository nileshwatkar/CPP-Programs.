//4 reverse of string

/*#include<iostream>
#include<string>
using namespace std;

int main()
{
    string str = "techrel";
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}
*/


#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    // declare the size of character string
    char str[100] = "techrel";
    // use strrev() function to reverse a string
    cout<<"After the reverse of a string: "<<strrev(str);
    return 0;
}

//output:After the reverse of a string: lerhcet

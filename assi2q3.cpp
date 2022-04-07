//C++ Program to Find Size of int, float, double and char in Your System
#include <iostream>
using namespace std;

int main()
{
    cout<<"=================================================";
    cout<<"\n\n Data Size is below"<<endl;
    cout<<"Size of char: "<< sizeof(char)<< " byte"<< endl;
    cout<< "Size of int: "<< sizeof(int)<< " bytes"<< endl;
    cout<< "Size of float: "<< sizeof(float)<< " bytes"<< endl;
    cout<< "Size of double: "<< sizeof(double)<< " bytes"<< endl;

return 0;
}


/*Output:

=================================================

 Data Size is below
Size of char: 1 byte
Size of int: 4 bytes
Size of float: 4 bytes
Size of double: 8 bytes*/

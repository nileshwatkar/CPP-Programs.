/*5. Create a class named 'PrintNumber' to print various numbers of different datatypes by creating
different functions with the same name 'printn' having a parameter for each datatype.*/


#include <iostream>
using namespace std;

class PrintNumber
{
public:
    static void printn(int n)
    {
        cout << n << endl;
    }

    static void printn(float n)
    {
        cout << n << endl;
    }

    static void printn(double n)
    {
        cout << n << endl;
    }
};

int main()
{
    PrintNumber::printn(1);
    PrintNumber::printn(1.223);
    PrintNumber::printn(1.223445);
    return 0;
}
/*
1
1.223
1.22344
*/

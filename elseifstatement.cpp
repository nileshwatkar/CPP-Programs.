//Using else if statement.

#include<iostream>
using namespace std;

int main()
{
    int time=20;

        if(time<10)
            {
                cout<<"\nGood Morning";

            }

        else if(time<20)
            {
                cout<<"\n Good Day";

            }

        else
            {
                cout<<"\n Good Evening"; //if statement is false the it will print good evening

            }

return 0;
}

//Output: Good Evening

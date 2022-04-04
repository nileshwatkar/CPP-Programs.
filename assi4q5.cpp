//5 check leap year

#include <iostream>
using namespace std;
int main()
{
    int year;
        cout<<"\nEnter a year to check if it is a leap year:";
        cin>>year;

            if( year%400 == 0)
            cout<<"\n is a leap year."<<year;

            else if( year%100 == 0)
            cout<<"\n is not a leap year."<<year;

            else if( year%4 == 0 )
            cout<<"\n is a leap year."<<year;

            else
            cout<<"\n is not a leap year."<<year;

    return 0;
}

/*Output: Enter a year to check if it is a leap year:2022

 is not a leap year.2022*/

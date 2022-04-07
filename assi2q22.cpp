//C++ Program to Check Whether a Number is Palindrome or Not

#include <iostream>
using namespace std;

int main()
{
    int num,temp,rev=0;

    cout<<"Enter a number \n";
    cin >> num;

    temp=num;

    //while loop to revesere the 'num'
    while(temp>0){
        rev = rev*10 + temp%10;
        temp = temp/10;
    }

    if(rev == num)
        cout << " is Palindrome number \n";
    else
        cout << "Not a Palindrome number \n";

    return 0;
}

/* output

Enter a number
1661
 is Palindrome number
 */

//C++ program to Find Sum of Natural Numbers using Recursion


#include<iostream>
using namespace std;

int Sum_Natural(int num)  // calculating sum of natural number using recursion
{
    if(num != 0)
        return num + Sum_Natural(num - 1);
return 0;
}
int main()
{
    int num; // declaring variables

    cout << "Enter the number: ";
    cin >> num;  // taking the size of natural numbers

    cout << "Sum =  " << Sum_Natural(num);  // calculating sum

return 0;
}

/*
Enter the number: 10
Sum =  55
*/

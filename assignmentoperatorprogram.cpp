#include<iostream>
using namespace std;

int main ()
{
    int a = 10;
    int b = a;

    cout << "Assignment Operators \n";

    cout<<"\n The value is= "<<b;

    // += Operator
    b += 10;
    cout<<"\nb += 10;b = "<<b;

    // -= Operator
    b -=5;
    cout<<"\nb -=5;b = "<<b;

    // *= Operator
    b *=4;
    cout<<"\nb *=4;b = "<<b;

    // /= Operator
    b /=2;
    cout<<"\nb /=2;b = "<<b;

	//Main Function return Statement
	return 0;
}

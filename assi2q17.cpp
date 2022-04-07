//C++ Program to Calculate Power of a Number

#include <iostream>

using namespace std;

int main()
{
        int base,exponent,i,result=1;

            cout<< "Enter the base : \n";
            cin>>base;

            cout<< "Enter the exponent : \n";
            cin>>exponent;

    // Calculate base^exponent by repetitively multiplying base
            for(i =0;i<exponent;i++)
                {
            result=result*base;
                }

            cout <<base<< "^" <<exponent<< " = " << result;

return 0;
}
/*
Enter the base :
1
Enter the exponent :
2
1^2 = 1
*/

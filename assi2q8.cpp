//C++ Program to Find All Roots of a Quadratic Equation

/*#include<iostream>
#include <cmath>
using namespace std;

int main()
{

    double a,b,c,root1,root2; //declaring variables.

        cout<<"enter values of a,band c";
        cin>>a>>b>>c; // taking values from user

            root1=(-b+sqrt(b*b-4.*a*c))/(2.*a); //calculating quadratic
            root2=(-b-sqrt(b*b-4.*a*c))/(2.*a);

                cout<<"\n First root is "<<root1;  //printing roots 1 and 2 values
                cout<<"\n Second root is "<<root2;
return 0;
}
*/

#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;

    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;

    discriminant = b*b - 4*a*c;

            if (discriminant > 0)
                {

                    x1 = (-b + sqrt(discriminant)) / (2*a);
                    x2 = (-b - sqrt(discriminant)) / (2*a);
                    cout << "Roots are real and different." << endl;
                    cout << "x1 = " << x1 << endl;
                    cout << "x2 = " << x2 << endl;
                }


                    else if (discriminant == 0)
                    {

                        cout << "Roots are real and same." << endl;
                        x1 = -b/(2*a);
                        cout << "x1 = x2 =" << x1 << endl;
                    }

            else

            {
                realPart = -b/(2*a);
                imaginaryPart =sqrt(-discriminant)/(2*a);
                cout << "Roots are complex and different."  << endl;
                cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
                cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
        }
return 0;
}

/* Output:

Enter coefficients a, b and c: 1
2
3
Roots are complex and different.
x1 = -1+1.41421i
x2 = -1-1.41421i
*/

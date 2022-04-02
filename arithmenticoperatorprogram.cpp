#include <iostream>
using namespace std;

main() {
   int a = 21;
   int b = 10;
   int c ;

   c = a + b;
   cout << "Addition is :" << c << endl ;

   c = a - b;
   cout << "Subtraction is  :" << c << endl
   ;
   c = a * b;
   cout << "Multiplication is :" << c << endl ;

   c = a / b;
   cout << "Division is  :" << c << endl ;

   c = a % b;
   cout << "Modulus is  :" << c << endl ;

   c = ++a;
   cout << "Increment is :" << c << endl ;

   c = --a;
   cout << "Decrement is  :" << c << endl ;

   return 0;
}

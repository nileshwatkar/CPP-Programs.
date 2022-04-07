//C++ program to Calculate Factorial of a Number Using Recursion

#include<iostream>
using namespace std;

int factorial(int n);

int main() {

  int n;

  cout << "Enter the number: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);

return 0;
}

int factorial(int n) {

  if(n > 1)

    return n * factorial(n - 1);

  else

    return 1;
}
/*
Enter the number: 6
Factorial of 6 = 720
*/

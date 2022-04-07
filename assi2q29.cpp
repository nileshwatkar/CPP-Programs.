//C++ Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide Using switch...case


#include <iostream>
using namespace std;

int main()
{
    float num1, num2;
    char op;

            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;

            cout << "Enter operator: +, -, *, /: ";
            cin >> op;

switch(op)
{
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;

            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;

            break;

        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;

            break;

        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;

            break;

        default:
            cout << "Invalid Operator";

            break;
    }
    return 0;
}
/*
Enter the first number: 1
Enter the second number: 2
Enter operator: +, -, *, /: +
1 + 2 = 3
*/

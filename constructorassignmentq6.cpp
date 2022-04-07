/*6. Create a class to print an integer and a character using two functions having the
same name but different sequence of the integer and the character parameters.
For example, if the parameters of the first function are of the form (int n, char c),
then that of the second function will be of the form (char c, int n).
*/
#include<iostream>
using namespace std;

class print{
 public:

  void output(int a, char b[20])
  {
   cout<<"Integer is "<<a<<endl;
   cout<<"Character is "<<b<<endl;
  }

  void output(char b[20], int a)
  {
   cout<<"Character is "<<b<<endl;
   cout<<"Integer is "<<a<<endl;
  }
};

int main()
{
 print obj;
 obj.output("Programming Skills", 10);
 obj.output(10, "Programming Skills");
}


/*
Character is Programming Skills
Integer is 10
Integer is 10
Character is Programming Skills
*/

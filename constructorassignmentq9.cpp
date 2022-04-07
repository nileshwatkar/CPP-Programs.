/*9. Create a class 'Degree' having a function 'getDegree' that prints "I got a degree". It has two
subclasses namely 'Undergraduate' and 'Postgraduate' each having a function with the same name
that prints "I am an Undergraduate" and "I am a Postgraduate" respectively. Call the function by
creating an object of each of the three classes.*/

#include <iostream>
using namespace std;

class degree{
 public:
  degree()
  {
   cout<<"I got a degree."<<endl;
  }
};
class undergraduate:public degree{
 public:
  undergraduate()
  {
   cout<<"I am an Undergraduate"<<endl;
  }
};
class postgraduate:public degree{
 public:
  postgraduate()
  {
   cout<<"I am a Postgraduate";
  }
};
int main()
{
 undergraduate u;
 postgraduate p;

}
/*
I got a degree.
I am an Undergraduate
I got a degree.
I am a Postgraduate
*/

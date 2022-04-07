/*2.Create a class named 'Rectangle' with two data members- length and breadth and a function to
calculate the area which is 'length*breadth'. The class has three constructors which are :
1 - having no parameter - values of both length and breadth are assigned zero.
2 - having two numbers as parameters - the two numbers are assigned as length and breadth respectively.
3 - having one number as parameter - both length and breadth are assigned that number.
Now, create objects of the 'Rectangle' class having none, one and two parameters and print their areas.
*/
#include <iostream>
class Rectangle
{
public:
	Rectangle() {}
	explicit Rectangle(float i) : length(i), breadth(i)
	{}
	Rectangle(float a, float b) :length(a), breadth(b)
	{}
	void Calculate() { std::cout << length * breadth<<std::endl; }


private:
	float length {0},
		   breadth {0};

};
int main()
{
	Rectangle r1;
	Rectangle r2{ 10 };
	Rectangle r3{ 15,45 };
	r1.Calculate();
	r2.Calculate();
	r3.Calculate();
	return 0;
}
/*

0
100
675

*/

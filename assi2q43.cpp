




#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	float Price[50], SD, Mean, Variance, Sum = 0, Varsum = 0;
	int  i, Number;

	cout << "Please Enter the N Value  =  ";
	cin >> Number;

	cout << "Please Enter the Real Numbers upto " << Number <<"\n";
	for(i = 0; i < Number; i++)
	{
		cin >> Price[i];
	}
	for(i = 0; i < Number; i++)
	{
		Sum = Sum + Price[i];
	}
	Mean = Sum / (float)Number;

	for(i = 0; i< Number; i++)
	{
		Varsum = Varsum + pow((Price[i] - Mean),2);
	}
	Variance = Varsum / (float)Number;
	SD = sqrt(Variance);

	cout << "\nMean                = " << Mean;
	cout << "\nVarience            = " << Variance;
	cout << "\nStandard deviation =  " << SD;

 	return 0;
}


/*
Please Enter the N Value  =  5
Please Enter the Real Numbers upto 5
12
34
23
34
54

Mean                = 31.4
Varience            = 194.24
Standard deviation =  13.937
*/

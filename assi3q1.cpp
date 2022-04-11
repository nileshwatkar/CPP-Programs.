//1. Write a program to print the name, salary and date of joining of 10 employees in a company. Use array of objects.

#include<iostream>
using namespace std;

int main()
{
    long long int salary[20],dateofjoining[30],i;
    string name[20];

    cout<<"\n Enter The Name:";
    {
    for(int i=1;i<10;i++)

    getline(cin,name[i]);
    }

    cout<<"\n Enter the Salary:";
    {
    for(int i=1;i<10;i++)
    cin>>salary[i];
    }

    cout<<"\n Enter the date of joining:";
    {
    for(int i=0;i<=10;i++)
    cin>>dateofjoining[i];
    }

        cout<<"\n The information is:"<<name[i];


}



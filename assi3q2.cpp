/*2. Write a program to print the roll number and average marks of 8 students in three subjects (each out of 100).*/


#include<iostream>
using namespace std;

int main()
{
    int rollno[8],subject1,subject2,subject3;
    float sum,average,percentage;


        cout<<"\n Enter the Roll Number:\n";
            {

                for(int i=1;i<9;i++)
                cin>>rollno[i];
            }
        cout<<"\nEnter the first subject marks:";
        cin>>subject1;


        cout<<"\nEnter the second subject marks:";
        cin>>subject2;


        cout<<"\nEnter the third subject marks:";
        cin>>subject3;
cout<<"\n\n---------------------------------------------";
                sum=subject1+subject2+subject3;
                cout<<"\nthe sum is:"<<sum;

                average=sum/3;
                cout<<"\n The Average is:"<<average;

                percentage=(sum/300)*100;
                cout<<"\n The Percentage is:"<<percentage<<"%";
return 0;
}

/*Output:
 Enter the Roll Number:
1
2
3
4
5
6
7
8

Enter the first subject marks:12

Enter the second subject marks:34

Enter the third subject marks:45


---------------------------------------------
the sum is:91
 The Average is:30.3333
 The Percentage is:30.3333%
 */

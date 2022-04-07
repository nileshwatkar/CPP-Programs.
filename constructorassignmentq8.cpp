/*8. Create a class 'Student' with three data members which are name, age and address.
The constructor of the class assigns default values to name as "unknown", age as '0'
and address as "not available". It has two functions with the same name 'setInfo'.
First function has two parameters for name and age and assigns the same whereas the
second function takes has three parameters which are assigned to name, age and address
 respectively. Print the name, age and address of 10 students.
Hint - Use array of objects*/

#include<iostream>
#include<string>
using namespace std;
class student{
 int age;
 string name, add;
 public:
  student()
  {
   name="unknown";
      age=0;
    add="not available";
  }

 setinfo(char nam[20], int ag)
  {
   name=nam;
      age=ag;
   cout<<"Details of student is"<<endl;
   cout<<"Name : "<<name<<endl;
   cout<<"Age : "<<age<<endl;
  }

 setinfo(string nam, int ag, string addres)
  {
   name = nam;
      age= ag;
    add=addres;
  }
 void display()
  {
    cout<<"Name : "<<name<<endl;
    cout<<"Age : "<<age<<endl;
    cout<<"Address : "<<add<<endl;
  }
};
int main()
{
 int j=10;
 student s[j];
 int age;
 string name, add;
 cout<<"\t Enter Details of Students"<<endl;
 cout<<"\n"<<endl;
 for (int i=0; i<j; i++)
 {
     cout<<" Enter details of "<<i+1<<" Student"<<endl;
     cout<<"\t Name : ";
     cin>>name;
     cout<<"\t Age : ";
     cin >>age;
     cout<<"\t Address : ";
     cin>>add;
     s[i].setinfo(name, age, add);
     cout<<endl;
 }
   cout<<"\t Displaying Details of Students Entered"<<endl;
   cout<<"\n"<<endl;
   for(int i=0; i<j; i++)
   {
    cout<<"\n Details of "<<i+1<<" Student is"<<endl;
    s[i].display();
   }


}

/*Output:
   Enter Details of Students


 Enter details of 1 Student
         Name : Nilesh
         Age : 26
         Address : satara

 Enter details of 2 Student
         Name : ash
         Age : 25
         Address : sangli

 Enter details of 3 Student
         Name : amol
         Age : 25
         Address : daund

 Enter details of 4 Student
         Name : satya
         Age : 25
         Address : baramati

 Enter details of 5 Student
         Name : harun
         Age : 26
         Address : baramati

 Enter details of 6 Student
         Name : harshad
         Age : 27
         Address : punw

 Enter details of 7 Student
         Name : jivan
         Age : 29
         Address : satara

 Enter details of 8 Student
         Name : juned
         Age : 26
         Address : satara

 Enter details of 9 Student
         Name : avinash
         Age : 26
         Address : satara

 Enter details of 10 Student
         Name : kushal
         Age : 23
         Address : satara

         Displaying Details of Students Entered



 Details of 1 Student is
Name : Nilesh
Age : 26
Address : satara

 Details of 2 Student is
Name : ash
Age : 25
Address : sangli

 Details of 3 Student is
Name : amol
Age : 25
Address : daund

 Details of 4 Student is
Name : satya
Age : 25
Address : baramati

 Details of 5 Student is
Name : harun
Age : 26
Address : baramati

 Details of 6 Student is
Name : harshad
Age : 27
Address : punw

 Details of 7 Student is
Name : jivan
Age : 29
Address : satara

 Details of 8 Student is
Name : juned
Age : 26
Address : satara

 Details of 9 Student is
Name : avinash
Age : 26
Address : satara

 Details of 10 Student is
Name : kushal
Age : 23
Address : satara
*/

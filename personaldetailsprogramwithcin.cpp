#include<iostream>
using namespace std;
int main()
{
int age;
string name;
string address;
long long phonenumber;
char bloodgroup;
string gender;




    cout<<"\nEnter Your Name:";
        getline(cin,name);
    cout<<"\nEnter Your  Age:";
        cin>>age;
    cout<<"\nEnter Your  Address:";
        cin>>address;
    cout<<"\nEnter Your  Phone number:";
        cin>>phonenumber;
    cout<<"\nEnter Your  Blood Group:";
        cin>>bloodgroup;
    cout<<"\nEnter Your  Gender:";
        cin>>gender;


    cout<<"\nMy Name is:"<<name;
    cout<<"\nMy Age is:"<<age;
    cout<<"\nMy Address is:"<<address;
    cout<<"\nMy Phone number is:"<<phonenumber;
    cout<<"\nMy Blood Group is:"<<bloodgroup;
    cout<<"\nMy Gender is:"<<gender;
    return 0;
}

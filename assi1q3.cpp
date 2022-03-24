// Write a program in C++ to find Size of fundamental data types.

#include<iostream>
using namespace std;

int main()
{

cout<<"\n***The Fundamental data type***";

cout<<"\n\n The Size of Char is:"<<sizeof(char)<<" bytes\n";       //here is used sizeof operator to get char datatype default size

cout<<"\n The Size of Short is:"<<sizeof(short)<<" bytes\n";    //here is used sizeof operator to get short datatype default size

cout<<"\n The Size of Integer is:"<<sizeof(int)<<" bytes\n";    //here is used sizeof operator to get int datatype default size

cout<<"\n The Size of Long is:"<<sizeof(long)<<" bytes\n";      //here is used sizeof operator to get long datatype default size

cout<<"\n The Size of Long Long is:"<<sizeof(long long)<<" bytes\n"; //here is used sizeof operator to get long long datatype default size

cout<<"\n The Size of float is:"<<sizeof(float)<<" bytes\n";    //here is used sizeof operator to get float datatype default size

cout<<"\n The Size of Double is:"<<sizeof(double)<<" bytes\n";  //here is used sizeof operator to get double datatype default size

cout<<"\n The Size of Long Double is:"<<sizeof(long double)<<" bytes\n"; //here is used sizeof operator to long double char datatype default size

cout<<"\n The Size of Boolean is:"<<sizeof(bool)<<" bytes\n"; //here is used sizeof operator to get bool datatype default size

return 0;
}


/* The output is find below

***The Fundamental data type***

 The Size of Char is:1 bytes

 The Size of Short is:2 bytes

 The Size of Integer is:4 bytes

 The Size of Long is:4 bytes

 The Size of Long Long is:8 bytes

 The Size of float is:4 bytes

 The Size of Double is:8 bytes

 The Size of Long Double is:12 bytes

 The Size of Boolean is:1 bytes


*/












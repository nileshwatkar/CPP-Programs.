//1) check file found or not


#include <fstream>
#include<iostream>

using namespace std;
int main() {
    ifstream Cpp;
    Cpp.open("ass1q4.cpp");

            if(Cpp)
                {
            cout<<"file exists";
                }
                else
                    {
                    cout<<"file doesn't exist";
                    }
}

//Output: file doesn't exist

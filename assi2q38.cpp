//C++ program to Reverse a Sentence Using Recursion


#include <iostream>
using namespace std;

// declaring the user defined function for reversing the string from the user
void reverse(const string& a);

//body of the main function of the program
int main()
{

  //declaring the variable required to hold the string value from the user
  string str;

  //taking the input sentence from the user for hte reversing of string
  cout << " Please enter a string " << endl;
  getline(cin, str);

  // calling the user defined function toreverse the sentence
  reverse(str);

  return 0;
}

// definition of the user defined function for the reversing
void reverse(const string& str) {

  // store the size of the string
  size_t numOfChars = str.size();

  if(numOfChars == 1) {
    cout << str << endl;
  }
  else {
    cout << str[numOfChars - 1];

    // function recursion
    reverse(str.substr(0, numOfChars - 1));
  }
}
/*
 Please enter a string
Nilesh Watkar
raktaW hseliN
*/

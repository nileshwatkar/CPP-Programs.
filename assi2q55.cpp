//C++ Program to Copy Strings from one file to another file.

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string text;
    //For writing text file
    //Creating ofstream & ifstream class object
    ifstream read_file {"New.txt"};
    ofstream write_file {"copy.txt"};

    if(write_file && write_file){

        while(getline(read_file,text)){
            write_file << text << "\n";
        }

        cout << "Copy Finished \n";

    } else {
        //Something went wrong
        printf("Cannot read File");
    }

    //Closing file
    read_file.close();
    write_file.close();

    return 0;
}

/* Output:Output
Copy Finished
*/

#include<iostream>
#include<fstream>
using namespace std;

class Student{
public :
         string namestd ,address,collegename;
         int rollno, marks, totalmarks;

         Student(){
         }

         Student(string stds ,string add,string clgname,
         int rollno1, int marks1, int totalmarks1){
                  namestd =stds;
                  address =  add;
                  collegename = clgname;
                  rollno =  rollno1;
                  marks =  marks1;
                  totalmarks =  totalmarks1;
         }

   void Printdata(){
   string output = "\n Student name :"+namestd +
                  "\n Address :"  +address+
                  "\n collegename :" + collegename+
                  "\n rollno :" + to_string(rollno)+
                  "\n marks :" +to_string(marks)+
                  "\ntotalmarks :" + to_string(totalmarks);
    cout << " \n\n ******************** Student Data ***********\n";
    cout << output;

            DataFile(output);//output for file


   }
        void DataFile(string output)
            {
                ofstream MyFile("thefile.txt");
                MyFile<<output;

                MyFile.close();

            }

};


int main(){
         Student std1("TOM" , "Disney" ,"Hollywood",10001 , 700,850);
         std1.Printdata();

         Student std2("Jerry" , "Disney" ,"Hollywood",10002 , 750,850);
         std2.Printdata();

return 0;
}


/*Output


 ******************** Student Data ***********

 Student name :TOM
 Address :Disney
 collegename :Hollywood
 rollno :10001
 marks :700
totalmarks :850

 ******************** Student Data ***********

 Student name :Jerry
 Address :Disney
 collegename :Hollywood
 rollno :10002
 marks :750
totalmarks :850

*/

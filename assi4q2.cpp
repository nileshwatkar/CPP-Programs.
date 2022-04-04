//2) febonanci series


#include <iostream>
using namespace std;
int main()
{
    int number1=0,number2=1,number3,number;


            cout<<number1<<" "<<number2<<" "; //printing 0 and 1
            for(int i=2;i<number;++i) //loop starts from 2 because 0 and 1 are already printed

                {
                    number3=number1+number2;
                    number1=number2;
                    number2=number3;
                        cout<<number3<<"";
                }

return 0;

}

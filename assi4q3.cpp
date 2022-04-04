//3 To check amstrong number


#include<iostream>
using namespace std;

int main()
{
        int num,x,sum=0,i;

            cout << "Enter a number:";
            cin >> num;

            i=num;

                while(i!=0)
                    {
                    x = i%10;
                    sum= sum + x*x*x;
                    i = i/10;
                    }

                if(num==sum)

                    cout<<num <<"\nis an Armstrong Number.";
                else

                    cout<<num <<"\nis not an Armstrong Number.";
return 0;
}

/*Output:
Enter a number:153
153
is an Armstrong Number.
*/

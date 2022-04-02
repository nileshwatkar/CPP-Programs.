//Using Continue statement in while loop


#include<iostream>
using namespace std;

int main()
{
    int i=0;

        while(i<10)
            {
                if(i==4)
                {
                    i++;
                    continue;

                }
                    cout<<"\n"<<i;
                    i++;

            }
return 0;

}

/*Output:

0
1
2
3
5
6
7
8
9
*/

/*65. Write a C++ program to check whether given length of three side form a right
triangle.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    vector<int> triangle_sides(3);

        cout<<"\nFirst Input:";
        cin>>triangle_sides[0];

        cout<<"\nSecond Input:";
        cin>>triangle_sides[1];

        cout<<"\nThird Input:";
        cin>>triangle_sides[2];


        sort(triangle_sides.begin(),triangle_sides.end());

                if (triangle_sides[0]*triangle_sides[0] + triangle_sides[1]*triangle_sides[1] == triangle_sides[2]*triangle_sides[2])
                    {
            cout<<"\nYes"<<endl;
                    }
                else
                    {
            cout<<"\nNo" << endl;
                    }

return 0;
}

/*Output:
First Input:1

Second Input:2

Third Input:3

No*/

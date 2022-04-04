/*77. There are four different points on a plane: A(x1, y1), B(x2, y2), C(x3, y3) and
D(x4, y4).
Write a C++ program to check whether two straight lines AB and CD are
orthogonal or not.
Input:
0 6
5 6
3 8
3 2
Output:
yes*/


#include <iostream>
using namespace std;
int main()
{
        double x[4],y[4];

            cout<<"\n Enter the input";
            cin >> x[0] >> y[0];
                {

            for(int i=1; i<4; i++){
            cin >> x[i] >> y[i];
                }

                if( (x[1]-x[0])*(x[3]-x[2])+(y[3]-y[2])*(y[1]-y[0]) == 0 )
                    {
            cout << "Yes, AB and CD are orthogonal.";
                    }
                else

                    {
            cout << "Yes, AB and CD are not orthogonal.";
                    }
    }
    return 0;
}

/*Output:
 Enter the input0 6
5 6
3 8
3 2
Yes, AB and CD are orthogonal.
*/

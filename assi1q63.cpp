/*63. Write a C++ program which prints three highest numbers from a list of
numbers in descending order.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int number;

    vector<int>nums;

        while(cin>>number)
            {

            nums.push_back(number);
            }
                sort(nums.rbegin(),nums.rend());

                for(int i=0;i!=3;++i)

                    {
                        cout<<"\n"<<nums[i];
                    }
return 0;
}

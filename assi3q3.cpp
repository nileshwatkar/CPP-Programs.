/*3. Write a program to calculate the average height of all the students of a class.
The number of students and their heights are entered by the user.
*/



#include <iostream>
using namespace std;

int main()
{
    int heights[9],height_sum = 0;
    float average;
    for(int i = 0; i<=9; i++)
    {

      cout << "Enter the height of " << i<< " student : ";
      cin >> heights[i];
    }
    for(int i = 0; i<=9; i++)
    {
      height_sum = height_sum +  heights[i];
    }
    average =  height_sum / 10.0;
    cout<<"Average height is : "<< average;

    return 0;
}

/*Output:Output
Enter the height of 0 student : 2
Enter the height of 1 student : 45
Enter the height of 2 student : 65
Enter the height of 3 student : 76
Enter the height of 4 student : 87
Enter the height of 5 student : 34
Enter the height of 6 student : 56
Enter the height of 7 student : 76
Enter the height of 8 student : 34
Enter the height of 9 student : 54
Average height is : 52.9
*/

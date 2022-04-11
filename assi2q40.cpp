//C++ Program to Calculate Average of Numbers Using Arrays


#include <iostream>
using namespace std;

int main()
{
    //declring the variables for the program.
    int n, i;
    float num[100], sum=0.0, average;

    //taking the size of array in the program.
    cout << "Enter the numbers of data: ";
    cin >> n;

    //taking the elements of the array.
    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 0; i < n; ++i)
    {
        cout << i + 1 << ". Enter number: ";
        cin >> num[i];
        sum += num[i];
    }

    //printing the average of the program
    average = sum / n;
    cout << "Average = " << average;

    return 0;
}
/*Enter the numbers of data: 3
1. Enter number: 23
2. Enter number: 34
3. Enter number: 45
Average = 34
*/

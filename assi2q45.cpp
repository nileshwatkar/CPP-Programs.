//C++ Program to Multiply Two Matrix Using Multi-dimensional Arrays
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mult[10][10], row1, colume1, row2, colume2, i, j, k;

            cout << "Enter rows and columns for first matrix: ";
            cin >> row1 >> colume1;
            cout << "Enter rows and columns for second matrix: ";
            cin >> row2 >> colume2;

            // If column of first matrix in not equal to row of second matrix,
            // ask the user to enter the size of matrix again.
                while (colume1!=row2)
                {
                    cout << "Error! column of first matrix not equal to row of second.";

                    cout << "Enter rows and columns for first matrix: ";
                    cin >> row1 >> colume1;

                    cout << "Enter rows and columns for second matrix: ";
                    cin >> row2 >> colume2;
                }

                            // Storing elements of first matrix.
                            cout << endl << "Enter elements of matrix 1:" << endl;

                                    for(i = 0; i < row1; ++i)
                                    for(j = 0; j < colume1; ++j)
                                {
                                cout << "Enter element a" << i + 1 << j + 1 << " : ";
                                cin >> a[i][j];
                                }

                                        // Storing elements of second matrix.
                                        cout << endl << "Enter elements of matrix 2:" << endl;

                                        for(i = 0; i < row2; ++i)
                                        for(j = 0; j < colume2; ++j)
                                            {
                                            cout << "Enter element b" << i + 1 << j + 1 << " : ";
                                            cin >> b[i][j];
                                            }

                                                // Initializing elements of matrix mult to 0.
                                                    for(i = 0; i < row1; ++i)
                                                    for(j = 0; j < colume2; ++j)
                                                    {
                                                        mult[i][j]=0;
                                                    }

                                                        // Multiplying matrix a and b and storing in array mult.
                                                                for(i = 0; i < row1; ++i)
                                                                for(j = 0; j < colume2; ++j)
                                                                for(k = 0; k < colume1; ++k)
                                                                {
                                                                    mult[i][j] += a[i][k] * b[k][j];
                                                                }

                                                                        // Displaying the multiplication of two matrix.
                                                                        cout << endl << "Output Matrix: " << endl;

                                                                        for(i = 0; i < row1; ++i)
                                                                        for(j = 0; j < colume2; ++j)
                                                                    {
                                                                        cout << " " << mult[i][j];
                                                                        if(j == colume2-1)
                                                                            cout << endl;
                                                                    }

    return 0;
}

/* Output:
Enter rows and columns for first matrix: 2
3
Enter rows and columns for second matrix: 3
2

Enter elements of matrix 1:
Enter element a11 : 1
Enter element a12 : 2
Enter element a13 : 3
Enter element a21 : 4
Enter element a22 : 5
Enter element a23 : 6

Enter elements of matrix 2:
Enter element b11 : 8
Enter element b12 : 7
Enter element b21 : 6
Enter element b22 : 5
Enter element b31 : 4
Enter element b32 : 7

Output Matrix:
 32 38
 86 95
 */

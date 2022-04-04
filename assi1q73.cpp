/*73. Write a C++ program that accepts sales unit price and sales quantity of
various items and compute total sales amount and the average sales quantity. All
input values must greater than or equal to 0 and less than or equal to 1,000, and
the number of pairs of sales unit and sales quantity does not exceed 100. If a
fraction occurs in the average of the sales quantity, round the first decimal place.*/

#include <iostream>
using namespace std;

int main()
{
        int sale_price,quantity, sum=0, sum1=0,sum2=0;
    cout<<"\nInput Sales Price and Sales Quantity: ";

            while(cin>>sale_price>>quantity)
                {
                    sum1+=sale_price*quantity;
                    sum2 += quantity;

        sum++;
    }

    cout << "\nTotal of the sales amount and the average of the sales quantity:\n";
    cout<<"\n"<<sum1<<static_cast<int>(static_cast<double>(sum2)/sum+0.5)<<"\n";

    return 0;
}
/*
Input Sales Price and Sales Quantity: 10
2
30
40
50
60
40
Total

Total of the sales amount and the average of the sales quantity:

422034
*/

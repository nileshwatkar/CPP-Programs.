/*4. Lets create a bank account. Create a class named 'BankAccount' with the following data members
1 - Name of depositor
2 - Address of depositor
3 - Type of account
4 - Balance in account
5 - Number of transactions
Class 'BankAccount' has a function for each of the following
1 - Generate a unique account number for each depositor
For the first depositor, account number will be BA1000, for the second depositor it will be BA1001 and so on
2 - Display information and balance of depositor
3 - Deposit more amount in the balance of any depositor
4 - Withdraw some amount from the balance deposited
5 - Change the address of depositor
After creating the class, do the following operations
1 - Enter the information (name, address, type of account, balance) of the depositors. Number of depositors are to be entered by the user.
2 - Print the information of any depositor.
3 - Add some amount to the account of any depositor and then display the final information of that depositor
4 - Remove some amount from the account of any depositor and then display the final information of that depositor
5 - Change the address of any depositor and then display the final information of that depositor
6 - Randomly repeat these processes for some other bank accounts and after that print the total number of transactions.
*/



#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
using namespace std;
class Bank
{

//Declaration of data members
public:
char name[20],address[50];
char account_type[20];
int account_number;
int balance;

//member functions of the class Bank
// initialize function to initialize data members

void initialize()
{
cout<<"\nEnter Account Holders Name:";
gets(name);
cout<<"\n Enter the address";
gets(address);
cout<<"\nEnter Account type:";
gets(account_type);
cout<<"\nEnter account number:";
cin>>account_number;
cout<<"\nEnter balance to deposit:";
cin>>balance;
}

//deposit() function to deposit amount in account
void deposit()
{
int bal;
cout<<"\nEnter the amout to deposit:";
cin>>bal;
balance+=bal;
cout<<"\nAmount deposited successfuly\nYour New Balance:"<<balance;
}

//check() function to withdraw amount and check remaining balance

void check()
{
int bal;
cout<<"\nYour balance :"<<balance<<"\nEnter amount to withdraw:";
cin>>bal;
if(bal<=balance)
{
balance-=bal;
cout<<"\nRemaining Balance:"<<balance;
}
else
{
exit(0);
}
}

//display function to display user information
void display()
{
cout<<"\nName :";
puts(name);
cout<<"\nBalance :"<<balance;
}
};

int main()
{
int i;

//An array of objects of Bank class can be created to handle 10 customers and their data
//as Bank bk[10];
//Then run this array in loop to initialize and access it's data members

Bank bk;
bk.initialize();
cout<<"\n1. Your Information\n2. Deposit\n3. Withdraw\nEnter your choice\n";
cin>>i;
if(i==1)
{
bk.display();
}
else if(i==2)
{
bk.deposit();
}
else if(i==3)
{
bk.check();
}
getch();
}


/*Output:Output
Enter Account Holders Name:Nilesh

 Enter the addresssatara

Enter Account type:savings

Enter account number:123456789

Enter balance to deposit:10000

1. Your Information
2. Deposit
3. Withdraw
Enter your choice
3

Your balance :10000
Enter amount to withdraw:1200

Remaining Balance:8800
*/

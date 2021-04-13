#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <stdio.h>
using namespace std;

class Atm {
   float balance = 250;

public:
   void depositmoney();
   void withdrawmoney();
   void displayaccount();
};


// Function to deposit the account
void Atm::depositmoney()
{
int Amount;
// Asking user 
   cout << "Enter how much money"
       << " you want to deposit: ";
   
   cin >> Amount;
   if(Amount<0){
   cout << "\nInvalid Amount" << endl;
   return;
   }
   balance += Amount;
   cout << "\nAvailable Balance: "
       << balance;
}


void Atm::withdrawmoney()
{
   float amount;
   // Asking user 
   cout << "Enter how much money "
       << "you want to withdraw: ";
   cin >> amount;
   if(amount<0 || balance-amount<0){
   cout << "\nInvalid Amount 'or' your account balance is low." << endl;
   return;
   }
   // Decrease balance of account
   balance -= amount;
   cout << "\nAvailable balance: "
       << balance;
}

// Function to display the account
void Atm::displayaccount()
{
   cout << "\nAccount Balance: " << balance << endl ;
}


int main()
{
   int choice;

   // Creating object
   Atm customer;
  
cout << "Enter your option between 1/2/3/\n";
   cout << "1.Deposit\n";
   cout << "2.Withdrawl\n";
   cout << "3.Display balance\n";


   cin >> choice;
   
   if(choice==1){

   customer.depositmoney();
   }
   
   else if(choice==2){
  
   customer.withdrawmoney();
   }
   
   else if(choice==3){
  
   customer.displayaccount();
   }

   else{
   
   cout << "BAD DECISION";
   }
   return 0;
}


/*

prithbalaji@Prithvis-MBP Week 6 % cd "/Users/prithbalaji/Desktop/C++/Week 6/" && g++ Lab6.cpp -o Lab6 && "/Users/prithbalaji/Desktop
/C++/Week 6/"Lab6


Please choose one option:
1.Deposit
2.Withdrawl
3.Display balance

1
Enter how much money you want to deposit: 100

Available Balance: 350

prithbalaji@Prithvis-MBP Week 6 % cd "/Users/prithbalaji/Desktop/C++/Week 6/" && g++ Lab6.cpp -o Lab6 && "/Users/prithbalaji/Desktop/C++/Week 6/"Lab6
Please choose one option:
1.Deposit
2.Withdrawl
3.Display balance
2
Enter how much money you want to withdraw: 200


Available balance: 50







*/
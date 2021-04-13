#include <iostream>
using namespace std;

int main() {
int optionPick;

cout << " 1. Check Balance\n 2. Deposit Amount\n 3. Withdraw Amount\n 4. Exit." << endl;
cout << "Enter your option between 1/2/3/4: ";
cin >> optionPick;
switch(optionPick) {


//case1
case 1:
cout << "You have chosen Check Balance" << endl;
cout << "Here is your current balance" << endl;
cout << "Current balance = $999999" << endl;
break;

//case2
case 2:
int deposit;
cout << "You have chosen Deposit Amount" << endl;
cout << "How much do you want to deposit? ";
cin >> deposit;
cout << "Here is the money that you want to deposit \n";
cout << "Amount of $" << deposit << " deposited without failure and headaches. You will be fine!!" << endl;
break;

//case3

case 3:
cout << "You have chosen Withdraw Amount" << endl;
int withdraw;
cout << "How much do you want to withdraw? ";
cin >> withdraw;
cout << "here is the money you want to withdraw? ";
cout << "Amount " << withdraw << " withdrawn successfully" << endl;
break;

//case4
case 4:
cout << "You have chosen Exit" << endl;
cout << "You will now be Exiting.....too late to switch up";
break;
default:
cout << "BAD DECISION";
}

}

/*

cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ MenuFunction.cpp -o MenuFunction && "/Users/prithbalaji/Desktop/C++/Week 5/"MenuFunction
prithbalaji@Prithvis-MBP C++ % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ MenuFunction.cpp -o MenuFunction && "/Users/prithbalaji/Desktop/C++/Week 5/"MenuFunction
 1. Check Balance
 2. Deposit Amount
 3. Withdraw Amount
 4. Exit.
Enter your option between 1/2/3/4: 1
You have chosen Check Balance
Here is your current balance
Current balance = $999999
prithbalaji@Prithvis-MBP Week 5 % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ MenuFunction.cpp -o MenuFunction && "/Users/prithbalaji/Desktop/C++/Week 5/"MenuFunction
 1. Check Balance
 2. Deposit Amount
 3. Withdraw Amount
 4. Exit.
Enter your option between 1/2/3/4: 2
You have chosen Deposit Amount
How much do you want to deposit? 4
Here is the money that you want to deposit 
Amount of $4 deposited without failure and headaches. You will be fine!!
prithbalaji@Prithvis-MBP Week 5 % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ MenuFunction.cpp -o MenuFunction && "/Users/prithbalaji/Desktop/C++/Week 5/"MenuFunction
 1. Check Balance
 2. Deposit Amount
 3. Withdraw Amount
 4. Exit.
Enter your option between 1/2/3/4: 3
You have chosen Withdraw Amount
How much do you want to withdraw? 5
here is the money you want to withdraw? Amount 5 withdrawn successfully
prithbalaji@Prithvis-MBP Week 5 % cd "/Users/prithbalaji/Desktop/C++/Week 5/" && g++ MenuFunction.cpp -o MenuFunction && "/Users/prithbalaji/Desktop/C++/Week 5/"MenuFunction
 1. Check Balance
 2. Deposit Amount
 3. Withdraw Amount
 4. Exit.
Enter your option between 1/2/3/4: 4
You have chosen Exit
You will now be Exiting.....too late to switch up%                 
prithbalaji@Prithvis-MBP Week 5 % 


*/
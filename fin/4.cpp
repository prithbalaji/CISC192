#include <iostream>

using namespace std;

int main()

{
    //initalize variables
    int accountNumber, creditLimit, beginningBalance, MonthItems, MonthCredits;

    //input for variables
    cout << "Enter Account Number (an integer): ";

    cin >> accountNumber;

    cout << "Enter credit limit for the month: ";

    cin >> creditLimit;


    cout << "Enter beginning balance of the month: ";

    cin >> beginningBalance;

    cout << "Total of all items charged by this customer this month: ";

    cin >> MonthItems;

    cout << "Total of all credits applied to this customer's account this month: ";

    cin >> MonthCredits;

    cout << endl
         << "Whether a customer exceeded the credit limit on a charge account...." << endl;

    cout << "The account number is : " << accountNumber<< endl;

    cout << "The credit limit is : " << creditLimit << endl;

    cout << "The new balance is : " << beginningBalance + MonthCredits;


    if ((beginningBalance+ MonthCredits) > creditLimit)

    {

        cout << "\nYou have exceeded the credit limit";
    }
    else 
    {

        cout<< "\nYou have not exceeded the credit limit.";
    }
}

/*


prithbalaji@Prithvis-MBP fin % cd "/Users/prithbalaji/Desktop/C++/fin/" && g++ 4.cpp -o 4 && "/Users/prithbalaji/Desktop/C++/fin/"4
Enter Account Number (an integer): 123
Enter credit limit for the month: 200
Enter beginning balance of the month: 100
Total of all items charged by this customer this month: 2
Total of all credits applied to this customer's account this month: 101

Whether a customer exceeded the credit limit on a charge account....
The account number is : 123
The credit limit is : 200
The new balance is : 201
You have exceeded the credit limit

*/





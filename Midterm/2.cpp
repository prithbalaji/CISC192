#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>

using namespace std;


//initialization
double findPaymentAmount( double loanAmount, double annualInterestRatePercent, double numberOfPayments);
double findMonthlyInterestRate( double annualInterestRatePercent);
double findPaymentAmount( double loanAmount, double annualInterestRatePercent, double numberOfPayments){
double rate = findMonthlyInterestRate(annualInterestRatePercent)/100;
double N = numberOfPayments;
double L = loanAmount;
double paymentAmount;

  
//formula of payment is on the bottom
//payment = ((rate * (1+rate)^N) / ((1+Rate)^N - 1)) * L  
//the formula
paymentAmount = ((rate * pow((1+rate),N)) / ( pow((1+rate),N )- 1)) * L ;
return paymentAmount;

}
//double method for the monthlyInterestRate
double findMonthlyInterestRate(double annualInterestRatePercent){

return annualInterestRatePercent/12;

}

int main(){

double loanAmount, annualInterestRatePercent, numberOfPayments, paymentAmount;

  //returning variables

cout << "Please enter loan amount: " <<endl;
cin >> loanAmount;
cout << "Please enter annual interest rate as percent: " <<endl;
cin >> annualInterestRatePercent;
cout << "Please enter number payments: " <<endl;
cin >> numberOfPayments;

cout << "Loan Amount: " << loanAmount << endl;
cout << "Monthly Interest Rate: " << findMonthlyInterestRate(annualInterestRatePercent) << endl;
cout << "Number of Payments: " << numberOfPayments << endl;

paymentAmount = findPaymentAmount( loanAmount, annualInterestRatePercent, numberOfPayments);
cout << "paymentAmount : " << paymentAmount <<endl;
cout << "Amount Paid Back : " << paymentAmount * numberOfPayments <<endl;
cout << "Interest Paid : " << paymentAmount * numberOfPayments - loanAmount <<endl;

  

}

#include <iostream>
using namespace std;
int main()
{
    double principalAmount, annualRate, currentBalance;
    int years;
    cout << "Enter principal amount: ";
    cin >> principalAmount;
    cout << "Enter annual rate: ";
    cin >> annualRate;
    cout << "Enter number of years: ";
    cin >> years;
    
    currentBalance = principalAmount;


    for (int year = 1; year <= years; year++)
    {
        currentBalance = currentBalance + currentBalance * (annualRate / 100.0);
        cout << "Year: " << years << endl;
        cout << currentBalance << endl;
    }
    cout << "totalInterest = " << currentBalance - principalAmount;
    
} //Updated for Git Lab 06
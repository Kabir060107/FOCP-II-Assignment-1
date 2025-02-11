#include <iostream>
#include <cmath> // For pow() function

using namespace std;

int main() {
    // Declare constants
    const int COMPOUNDS_PER_YEAR = 1; // Annual compounding

    double principal, rate, years;

    cout << "Enter principal amount: ";
    cin >> principal;
    
    cout << "Enter annual interest rate (in %): ";
    cin >> rate;
    
    cout << "Enter time period (in years): ";
    cin >> years;

    double decimalRate = rate / 100;
    double amount = principal * pow(1 + decimalRate / COMPOUNDS_PER_YEAR, 
                                  COMPOUNDS_PER_YEAR * years);
    
    double compoundInterest = amount - principal;

    cout << "Compound Interest: " << compoundInterest << endl;

    return 0;
}

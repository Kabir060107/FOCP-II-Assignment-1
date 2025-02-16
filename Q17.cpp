#include <iostream>
using namespace std;

int integerDivision(int dividend, int divisor) {
    int quotient = 0;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    while (dividend >= divisor) {
        dividend -= divisor;
        quotient++;
    }
    return sign * quotient;
}

double floatingPointDivision(double dividend, double divisor, int precision) {
    double quotient = 0.0, increment = 1.0;
    int sign = (dividend < 0) ^ (divisor < 0) ? -1 : 1;
    dividend = abs(dividend);
    divisor = abs(divisor);
    for (int i = 0; i <= precision; i++) {
        while (dividend >= divisor) {
            dividend -= divisor;
            quotient += increment;
        }
        dividend *= 10;
        quotient *= 10;
        increment /= 10;
    }
    return sign * (quotient / 10);
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << "Integer division result: " << integerDivision(num1, num2) << endl;
    cout << "Floating-point division result: " << floatingPointDivision(num1, num2, 6) << endl;
    return 0;
}

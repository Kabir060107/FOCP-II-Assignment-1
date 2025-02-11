#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;
    
    if (num2 == 0) {
        cout << "Error! Division by zero is not allowed." << endl;
        return 1;
    }
    
    result = num1 / num2;
    
    cout << fixed << setprecision(2);
    cout << "The result is: " << result << endl;
    
    return 0;
}

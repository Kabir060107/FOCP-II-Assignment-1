#include <iostream>
#include <cmath>

using namespace std;

bool isRepresentableInBinary(double num) {
    while (num != floor(num)) {
        num *= 2;
    }
    while (fmod(num, 2) == 0 && num > 1) {
        num /= 2;
    }
    return num == 1;
}

int main() {
    double num;
    cout << "Enter a floating-point number: ";
    cin >> num;
    
    if (isRepresentableInBinary(num)) {
        cout << "The number can be represented exactly in binary format." << endl;
    } else {
        cout << "The number cannot be represented exactly in binary format because it has an infinite binary representation." << endl;
    }
    
    return 0;
}

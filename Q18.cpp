#include <iostream>
using namespace std;

int circularLeftShift(int num, int shift, int bits) {
    return (num << shift) | (num >> (bits - shift));
}

int circularRightShift(int num, int shift, int bits) {
    return (num >> shift) | (num << (bits - shift));
}

int main() {
    int num, shift, bits = 8; 
    
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Enter shift amount: ";
    cin >> shift;
    
    int leftShiftResult = circularLeftShift(num, shift, bits) & 0xFF;
    int rightShiftResult = circularRightShift(num, shift, bits) & 0xFF;
    
    cout << "Circular Left Shift: " << leftShiftResult << endl;
    cout << "Circular Right Shift: " << rightShiftResult << endl;
    
    return 0;
}

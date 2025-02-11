#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    char character;
    int integer;
    float floatNumber;
    
    cout << "Enter a character: ";
    cin >> character;
    
    cout << "Enter an integer: ";
    cin >> integer;
    
    cout << "Enter a floating-point number: ";
    cin >> floatNumber;
    
    cout << "\nFormatted Output:" << endl;
    cout << "-----------------------------------" << endl;
    cout << left << setw(15) << "Character" << setw(15) << "Integer" << setw(15) << "Float" << endl;
    cout << "-----------------------------------" << endl;
    cout << left << setw(15) << character << setw(15) << integer << setw(15) << fixed << setprecision(2) << floatNumber << endl;
    cout << "-----------------------------------" << endl;
    
    return 0;
}

#include <iostream>

using namespace std;

int main() {

    int num, count = 0;
    
    cout << "Enter an integer: ";
    cin >> num;
    
    while (num > 0) {
        count += (num & 1); 
        num >>= 1; 
    }
    
    cout << "Number of 1 bits: " << count << endl;
    
    return 0;
}

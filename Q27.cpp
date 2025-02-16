#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    
    cout << "Enter the start of the range: ";
    cin >> start;
    cout << "Enter the end of the range: ";
    cin >> end;
    
    cout << "Armstrong numbers in the range: ";
    
    for (int num = start; num <= end; num++) {
        int sum = 0, temp = num, digits = 0;
        
        while (temp > 0) {
            temp /= 10;
            digits++;
        }
        
        temp = num;
        
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        
        if (sum == num) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    return 0;
}

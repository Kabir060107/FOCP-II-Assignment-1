#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    int i = 2;
    while (i * i <= num) {
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

int main() {
    int n, count = 0, num = 2;
    
    cout << "Enter the number of prime numbers to generate: ";
    cin >> n;
    
    for (int i = 0; count < n; i++) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }
    
    cout << endl;
    return 0;
}

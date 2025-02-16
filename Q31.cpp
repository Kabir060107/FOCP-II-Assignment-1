#include <iostream>

using namespace std;

int reverseNumber(int num) {
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

bool isPalindrome(int num) {
    return num == reverseNumber(num);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    while (true) {
        num = reverseNumber(num);
        cout << "Reversed Number: " << num << endl;
        if (isPalindrome(num)) {
            cout << "Palindrome detected. Terminating early." << endl;
            break;
        }
    }
    return 0;
}

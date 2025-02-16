#include <iostream>
#include <limits>
using namespace std;

int main() {
    string input;
    int num, sum = 0, count = 0, maxNum = numeric_limits<int>::min(), minNum = numeric_limits<int>::max();
    
    while (true) {
        cout << "Enter an integer (or type 'exit' to stop): ";
        cin >> input;
        
        if (input == "exit") {
            break;
        }
        
        try {
            num = stoi(input);
            sum += num;
            count++;
            if (num > maxNum) {
                maxNum = num;
            }
            if (num < minNum) {
                minNum = num;
            }
        } catch (exception &e) {
            cout << "Invalid input. Please enter an integer." << endl;
        }
    }
    
    if (count > 0) {
        cout << "Sum: " << sum << endl;
        cout << "Count: " << count << endl;
        cout << "Maximum: " << maxNum << endl;
        cout << "Minimum: " << minNum << endl;
    } else {
        cout << "No valid integers were entered." << endl;
    }
    
    return 0;
}

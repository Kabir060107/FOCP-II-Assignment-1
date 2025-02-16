#include <iostream>
#include <limits.h>

using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int largest = INT_MIN, secondLargest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    if (secondLargest == INT_MIN) {
        cout << "No second largest element found." << endl;
    } else {
        cout << "Second largest element is: " << secondLargest << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter values for a, b, c, and d: ";
    cin >> a >> b >> c >> d;
    int result = (a ^ b) + (c & d);
    cout << "Result: " << result << endl;
    return 0;
}

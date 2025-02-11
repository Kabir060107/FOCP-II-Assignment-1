#include <iostream>

using namespace std;

int main() {
    double a, b, c;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "The triangle is Equilateral." << endl;
        } else if (a == b || b == c || a == c) {
            cout << "The triangle is Isosceles." << endl;
        } else {
            cout << "The triangle is Scalene." << endl;
        }
    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }
    
    return 0;
}

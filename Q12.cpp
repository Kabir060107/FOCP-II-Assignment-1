#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    
    cout << "Enter coefficients a, b, and c: ";
    cin >> a >> b >> c;
    
    double discriminant = (b * b) - (4 * a * c);
    
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are real and distinct: " << root1 << " and " << root2 << endl;
    } else if (discriminant == 0) {
  
        double root = -b / (2 * a);
        cout << "The roots are real and equal: " << root << endl;
    } else {
      
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "The roots are complex: " << realPart << " + " << imaginaryPart << "i and "
             << realPart << " - " << imaginaryPart << "i" << endl;
    }
    
    return 0;
}

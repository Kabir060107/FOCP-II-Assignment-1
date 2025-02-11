#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    
    // Ask for the user's name
    cout << "Enter your name: ";
    getline(cin, name);
    
    // Ask for the user's age
    cout << "Enter your age: ";
    cin >> age;
    
    // Display the output message
    cout << "Hello " << name << ", you are " << age << " years old!" << endl;
    
    return 0;
}

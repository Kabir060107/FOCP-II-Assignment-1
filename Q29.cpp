#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 5;

    cout << "Guess the number between 1 and 100. You have " << attempts << " attempts." << endl;
    
    while (attempts > 0) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess == number) {
            cout << "Congratulations! You guessed the number." << endl;
            return 0;
        } else if (guess < number) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }

        attempts--;
        cout << "Attempts left: " << attempts << endl;
    }

    cout << "Sorry! You ran out of attempts. The number was " << number << "." << endl;
    return 0;
}

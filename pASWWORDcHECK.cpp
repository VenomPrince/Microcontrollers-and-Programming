#include <iostream>
using namespace std;
#define MIN_LENGTH 8
int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;
    // Check if the password contains at least one uppercase letter
    bool hasUpper = false;
    for (char c : password) {
        if (isupper(c)) { // Check if the character is uppercase
            hasUpper = true;
            break;
        }
    }
    if (!hasUpper) {
        cout << "Password must contain at least one uppercase letter." << endl;
    }
    // Check if the password contains at least one lowercase letter
    bool hasLower = false;
    for (char c : password) {
        if (islower(c)) { // Check if the character is lowercase
            hasLower = true;
            break;
        }
    }
    if (!hasLower) {
        cout << "Password must contain at least one lowercase letter." << endl;
    }
    // Check if the password contains at least one digit
    bool hasDigit = false;
    for (char c : password) {
        if (isdigit(c)) { // Check if the character is a digit
            hasDigit = true;
            break;
        }
    }
    if (!hasDigit) {
        cout << "Password must contain at least one digit." << endl;
    }
    bool hasSpecialChar = false;
    // Check if the password contains a special character
    for (char c : password) {
        if (ispunct(c)) { // Check if the character is a special character
            hasSpecialChar = true;
            break;
        }
    }
    if (password.length() < MIN_LENGTH) {
        cout << "Password is too short. It must be at least " << MIN_LENGTH << " characters long." << endl;
    } else if (!hasSpecialChar) {
        cout << "Password must contain at least one special character." << endl;
    } else {
        cout << "Password is valid." << endl;
    }
   

    return 0;
}
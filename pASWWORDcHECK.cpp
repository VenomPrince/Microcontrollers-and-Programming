#include <iostream>
using namespace std;
#define MIN_LENGTH 8
int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;
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
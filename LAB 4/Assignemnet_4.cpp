#include <iostream>
#include <string>
using namespace std;

// Example without cin.ignore()
void withoutCinIgnore() {
    int age;
    string name;
    
    cout << "EXAMPLE WITHOUT cin.ignore()" << endl;
    cout << "----------------------------" << endl;
    cout << "Enter your age: ";
    cin >> age;
    
    // No cin.ignore() used
    cout << "Enter your full name: ";
    getline(cin, name);
    
    cout << "Age: " << age << ", Name: \"" << name << "\"" << endl;
    cout << endl;
}

// Example with cin.ignore()
void withCinIgnore() {
    int age;
    string name;
    
    cout << "EXAMPLE WITH cin.ignore()" << endl;
    cout << "------------------------" << endl;
    cout << "Enter your age: ";
    cin >> age;
    
    // Using cin.ignore() to clear the buffer
    cin.ignore();
    
    cout << "Enter your full name: ";
    getline(cin, name);
    
    cout << "Age: " << age << ", Name: \"" << name << "\"" << endl;
}

int main() {
    withoutCinIgnore();
    withCinIgnore();
    
    cout << "\nEXPLANATION:" << endl;
    cout << "-----------" << endl;
    cout << "Without cin.ignore():" << endl;
    cout << "  The newline character left in the input buffer after reading" << endl;
    cout << "  the age is immediately consumed by getline(), resulting in" << endl;
    cout << "  an empty string for the name." << endl;
    cout << endl;
    cout << "With cin.ignore():" << endl;
    cout << "  The newline character is discarded by cin.ignore()," << endl;
    cout << "  allowing getline() to wait for actual user input" << endl;
    cout << "  for the name, resulting in correct behavior." << endl;
    
    return 0;
}
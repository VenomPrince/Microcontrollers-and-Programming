#include <iostream>
using namespace std;

int main() {
    int a = 100; // Declare an integer variable
    int& refA = a; // Create a reference to the variable a

    cout << "Original value of a: " << a << endl; // Print the original value of a
    cout << "Value through refA: " << refA << endl; // Print the value through the reference

    refA = 30; // Modify the value using the reference
    cout << "Updated value of a: " << a << endl; // Print the updated value of a
    cout << "Value through refA aft modi: " << refA << endl; // Print the value through the reference

    return 0;
}
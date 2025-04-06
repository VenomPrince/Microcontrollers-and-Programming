#include <iostream> 
using namespace std; 

// Function to swap two floating-point values without using pointers or references
void swap(float a, float b) {
 //make a temporary variable to hold the value of a
    // Swap the values of a and b

    float temp;
    temp = a;
    a = b;
    b = temp;
    // Print the swapped values
    cout << "After swap: a = " << a << ", b = " << b << endl;
}

int main() {
    // Example usage
    // Declare two floating-point variables
    float a = 5.5;
    float b = 7.7;
    // Print the original values
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    // Call the swap function
    swap(a, b);
    // Print the values after the swap
    return 0;
}


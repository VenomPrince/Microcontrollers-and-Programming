//// This program demonstrates how to copy elements from one array to another in reverse order using pointers.
// The program initializes an array with 5 elements, creates a new array, and copies the elements from the original array to the new array in reverse order.
#include <iostream> // Include the iostream library for input and output
using namespace std; // Use the standard namespace
//
int main() {
    int z; // Declare a variable to store the size of the array, soly for testing
    cout << "Enter the size of new array: "; // Prompt the user to enter a number
    cin >> z;
    int size = z; // Define the size of the array
    // we can also use cin >> size; but i didnt want to use it
    int originalArray[size] = {1, 4, 7, 10, 15}; // Initialize the original array
    int newArray[size]; // Declare the new array

    int* ptr = originalArray; // Pointer to traverse the original array

    // Traverse the original array and copy elements to the new array in reverse order
    for (int i = 0; i < size; i++) {
        newArray[size - 1 - i] = *(ptr + i); // Copy the value in reverse order
    }

    // Print elements of the new array
    cout << "Elements in the new array: "; /// Print message
    for (int i = 0; i < size; i++) { // Traverse the new array
        // Print each element of the new array
        cout << newArray[i] << " "; 
    }
    cout << endl;

    return 0; // Return 0 to indicate successful execution
}


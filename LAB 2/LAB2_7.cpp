#include <iostream>
using namespace std;

int main() {
int l = 10; // int as l because why not

int *ptr = &l; // Pointer to the length variable
int *ptr2 = ptr; // Pointer to the pointer variable
 
cout << "Length: " << *ptr << endl; // Print the value of l using the pointer

*ptr = 20; // Change the value of l using the pointer
cout << "Updated Length: " << *ptr << endl; // Print the updated value of l

return 0; // Return 0 to indicate successful execution
}
// This program demonstrates how to use pointers to manipulate variables in C++.

#include <iostream>
using namespace std;
#define square(x) (x*x)
int main() {
    int a = 5;
    int b = square(a); // This will expand to (5*5) = 25
    cout << "The value of a is: " << a << endl; // Output: The value of a is: 5
    cout << "The value of b is: " << b << endl; // Output: The value of b is: 25
    return 0;
}

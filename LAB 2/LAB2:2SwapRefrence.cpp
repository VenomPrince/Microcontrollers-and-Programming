#include <iostream>
using namespace std;
// Function doesn't swap if it is not passed by reference
// This function swaps two integers using reference parameters
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 5;
    int b = 7;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
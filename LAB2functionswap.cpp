#include <iostream>
using namespace std;

void multiply(double *b, double *a) {
    cout << *b << endl;
    cout << *a << endl;
    cout << *b * *a << endl;
}

int main() {
    double a = 5;
    double b = 10;
    multiply(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
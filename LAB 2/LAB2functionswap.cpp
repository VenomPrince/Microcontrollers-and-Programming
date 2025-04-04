#include <iostream>
using namespace std;

void multiply(double *b, double *a) {
    cout << *b << endl;
    cout << *a << endl;
    cout << *b * *a << endl;
}
void multiply(int *c, int *d) {
    cout << *c << endl;
    cout << *d << endl;
    cout << *c * *d << endl;
}


int main() {
    int c = 5;
    int d = 10;
    double a = 5;
    double b = 10;
    multiply(&a, &b);
    cout << "a: " << a << ", b: " << b << endl;
    return 0;
}
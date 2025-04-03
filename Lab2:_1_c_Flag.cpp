#include <iostream>
#include <cmath>
using namespace std;

int mutiply(int a, double b)
{
    return a * b;
}
double mutiply(int a, int b)
{
    return a * b;
}
void calling(int *a, double *b, bool *c)
{
    if (*c == false)
    {
        cout << "The value of a is: " << *a << endl;
        cout << "The value of b is: " << *b << endl;
        cout << "a * b = " << *a * *b << endl;
    }
    else
    {
        cout << "The value of a is: " << *a << endl;
        cout << "The value of b is: " << *b << endl;
        cout << "a * b = " << ceil(*a * *b) << endl;
    }
}
int main()
{
    cout << "Please enter an integer: ";
    int a;
    cin >> a;
    cout << "Please enter a double: ";
    double b;
    cin >> b;
    bool c;
    cout << "Please enter 0 or 1: ";
    cin >> c;
    calling(&a, &b, &c);
}
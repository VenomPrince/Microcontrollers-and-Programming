#include <iostream>
using namespace std;
void swapusingpointer(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a = 5;
    int b = 7;
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swapusingpointer(&a, &b);
    cout << "After swap: a = " << a << ", b = " << b << endl;
    return 0;
}
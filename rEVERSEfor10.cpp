#include <iostream>
using namespace std;
int main()
{
    int number,reverse=0;
    int a = 0;
    cout << "Enter the number of digits to reverse: ";
    cin >> a;
    cout << "Enter Number: ";
    cin >> number;
    int temp = number;
    for( int i = 0; i < a; i++)
    {
        if (temp == 0)
            break;
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }
    cout << "Reverse of " << number << " is " << reverse << endl;
    return 0;
}
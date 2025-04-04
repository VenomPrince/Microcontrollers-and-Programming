#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (; num > 0; num /= 10) {  // Loop until num becomes 0
        sum += num % 10;  // Extract the last digit and add to sum
    }

    cout << "Sum of digits: " << sum << endl;
    return 0;
}

#include <iostream>

using namespace std;

int main(){

int x, y;
cout << "Enter first numbers: ";

cin >> x;

cout << "Enter second numbers: ";
cin >> y;

cout << "Enter a character(+,-,*,/): ";
char op;
cin >> op;
// Perform the operation based on the operator entered
// Use a switch statement to handle different operations
switch(op){
    case '-':
        cout << "Difference of " << x << " and " << y << " is " << x - y << endl;
        break;
    case '+':
        cout << "Sum of " << x << " and " << y << " is " << x + y << endl;
        break; // Use break to exit the switch
    case '*':
        cout << "Multiplication of " << x << " and " << y << " is " << x *  y << endl;
        break;
    case '/': // Division
        if (y != 0) // Check for division by zero
            cout <<"Division of " << x << " by " << y << " is " << x / y << endl;
        else
            cout << "Division by zero is not allowed.";
        break;
    default: // Default case if the operator is not recognized
        cout << "Invalid operator.";
        break;
}

return 0;
}


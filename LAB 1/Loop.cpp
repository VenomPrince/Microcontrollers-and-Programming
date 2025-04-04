#include <iostream>
#define MAX 100
#define LIMIT 50 // Added macro for the limit
using namespace std;

int main() {
    for (unsigned int i = 2; i <= LIMIT; i += 2) 
    { // Changed int to unsigned int
        cout << i << endl;
    }
    // Macro and 
    return 0;
}
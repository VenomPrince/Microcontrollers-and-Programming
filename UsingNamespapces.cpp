// Shows how to use namespaces in C++
#include <iostream>
#include <string>

namespace MathOperations {
    int add(int a, int b) {
        return a + b;
    }
}

namespace TextOperations {
    std::string concat(const std::string& str1, const std::string& str2) {
        return str1 + str2;
    }
}

int main() {
    using namespace std;

    // Using MathOperations namespace
    int sum = MathOperations::add(5, 3);
    cout << "Sum: " << sum << endl;

    // Using TextOperations namespace
    string combined = TextOperations::concat("Hello, ", "World!");
    cout << "Concatenated String: " << combined << endl;

    return 0;
}


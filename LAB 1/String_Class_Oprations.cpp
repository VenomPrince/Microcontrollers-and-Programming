#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Convert string to uppercase
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }

    // Count the number of vowels
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count++;
        }
    }

    // Reverse the string
    string reversedStr = "";
    for (int i = str.length() - 1; i >= 0; i--)
    {
        reversedStr += str[i];
    }

    // Print the results
    cout << "Uppercase string: " << str << endl;
    cout << "Number of vowels: " << count << endl;
    cout << "Reversed string: " << reversedStr << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int con;

    while (true)
    {
        cout << "Enter a number (- integer to exit): ";
        cin >> con;

        if (con < 0)
        {
            cout << "Exiting the program." << endl;
            break;
        }
        else if (con ==0)
        {
            cout << "Skipped (continue) "<< endl;
        }
        else
        {
            int square = con * con;
            cout << "Square of " << con << " is " << square << endl;
        }
    }
    return 0;
}
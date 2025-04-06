#include <iostream>
using namespace std;
void multiply(double &b, double &e)
{
    cout<<b<<endl;
    cout<<e<<endl;
    cout<<b * e<<endl;

}
    int main()
{
    double b = 2;
    double e = 4;
    multiply(b, e);

    return 0;
}
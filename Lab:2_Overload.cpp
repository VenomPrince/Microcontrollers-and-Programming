#include <iostream>
using namespace std;
void swapa(int *a)
{
    cout<<*a<<endl;
}
void swapb(double *b, double *e)
{
    cout<<*b<<endl;
    cout<<*e<<endl;
}
void swapc(int *c)
{
    cout<<*c<<endl;
}
    int main()
{
    int a = 1;
    double b = 2;
    int c = 3;
    double e = 4;
    swapa(&a);
    swapb(&b, &e);
    swapc(&c);
    return 0;
}
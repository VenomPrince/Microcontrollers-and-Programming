#include<iostream>
using namespace std;

class car
{
    private:
        string brand;
        int year;

    public:
    //constructor
        car(string b, int y)
        {
            brand = b;
            year = y;
            cout << "Car " << brand << " from " << year << " created." << endl;
        }
        
    //destructor
        ~car()
        {
            cout << "Destructor called for " << brand << endl;
        }
        void showInfo()
        {
            cout << "Brand: " << brand << endl;
            cout << "Year: " << year << endl;
        }
    };

int main()
{
        car* c1 = new car("Toyota", 2020);
        c1->showInfo();
        //c1.showInfo();
        delete c1;
        return 0;

}
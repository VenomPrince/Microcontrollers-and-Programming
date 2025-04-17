#include <iostream>
#include <string>
using namespace std;
class book
{
    private:

    string title;
    int pages;
    string author;

    protected:
    float price;

    public:
    void setTitle(string t)
    {
        title = t;
    }   
    void setPages(int p)
    {
        pages = p;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    void setPrice(float p)
    {
        price = p;
    }
    string getTitle()
    {
        return title;
    }
    int getPages()
    {
        return pages;
    }
    string getAuthor()
    {
        return author;
    }
    float getPrice()
    {
        return price;
    }
    string publisher;
    void DisplayAuthorinfo()
    {
        cout << "Author: " << author << endl;
    }
};

int main()
{    
    book book1;
    book1.publisher= "Penguin";
    book1.setTitle("C++ Programming");
    book1.setPages(100);
    book1.setAuthor("John Doe");
    book1.setPrice(29.99);
    book1.DisplayAuthorinfo();
    cout << "Publisher: " << book1.publisher << endl;
    cout << "Price: " << book1.getPrice() << endl;
    cout << "Title: " << book1.getTitle() << endl;
    cout << "Pages: " << book1.getPages() << endl;
    cout << "Author: " << book1.getAuthor() << endl;


    return 0;
}
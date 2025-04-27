#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
public:
    // Constructor
    Book(string t = "Untitled", int p = 0) : title(t), pages(p) {
        cout << "Book Constructor: \"" << title << "\" with " << pages << " pages\n";
    }
    
    // Destructor
    ~Book() {
        cout << "Book Destructor: \"" << title << "\" destroyed\n";
    }
    
    // Method to display book info
    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

class BookShelf {
private:
    Book* books;  // pointer to Book array
    int size;
public:
    // Constructor: dynamically create array and initialize it
    BookShelf() {
        size = 3;
        books = new Book[size]{
            Book("C++ Fundamentals", 300),
            Book("Data Structures", 450),
            Book("Algorithms", 500)
        };
        cout << "BookShelf Constructor: Shelf initialized with " << size << " books\n";
    }
    
    // Destructor: clean up heap memory
    ~BookShelf() {
        delete[] books;
        cout << "BookShelf Destructor: Shelf destroyed\n";
    }
    
    void displayBooks() const {
        cout << "\nBooks on shelf:\n";
        for (int i = 0; i < size; ++i) {
            books[i].display();
        }
    }
};

// For Example 1: Array of Book objects
void example1() {
    cout << "EXAMPLE 1: Array of Book objects\n";
    cout << "--------------------------------\n";
    
    // Create an array of 3 Book objects
    Book library[3] = {
        Book("C++ Fundamentals", 300),
        Book("Data Structures", 450),
        Book("Algorithms", 500)
    };
    
    cout << "\n--- Library Contents ---\n";
    for (int i = 0; i < 3; ++i) {
        library[i].display();
    }
    cout << "\n--- End of Program ---\n";
    // Destructors will be called automatically when library goes out of scope
}

// For Example 2: BookShelf with dynamic allocation
void example2() {
    cout << "\n\nEXAMPLE 2: BookShelf with dynamic allocation\n";
    cout << "----------------------------------------\n";
    
    BookShelf* shelf = new BookShelf();  // created on heap
    shelf->displayBooks();
    delete shelf;  // cleanup
    cout << "\n--- End of Program ---\n";
}

int main() {
    // Run both examples
    example1();
    example2();
    
    // Analyze advantages and disadvantages
    cout << "\nADVANTAGES AND DISADVANTAGES\n";
    cout << "----------------------------\n";
    cout << "Example 1 (Stack-based array):\n";
    cout << "  Advantages: Simpler code, automatic cleanup, no memory leaks\n";
    cout << "  Disadvantages: Fixed size at compile time, can't resize\n\n";
    cout << "Example 2 (Heap-based BookShelf):\n";
    cout << "  Advantages: Dynamic size, can be created/destroyed at runtime\n";
    cout << "  Disadvantages: Manual memory management required, risk of memory leaks\n\n";
    cout << "Role of Destructors:\n";
    cout << "  The destructors ensure proper cleanup of resources:\n";
    cout << "  - In Example 1: Book destructors clean up each Book object\n";
    cout << "  - In Example 2: The BookShelf destructor calls delete[] on the Book array,\n";
    cout << "    which then calls each Book's destructor\n\n";
    cout << "If Destructors Were Removed:\n";
    cout << "  The program would still work functionally, but:\n";
    cout << "  - We would lose debug information (no destruction messages)\n";
    cout << "  - If Books had dynamic resources, we'd have memory leaks\n";
    cout << "  - In complex applications, this could lead to resource exhaustion\n";
    
    return 0;
}
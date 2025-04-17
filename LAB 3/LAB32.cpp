#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;   // Student's name
    int age;       // Student's age
    char grade;    // Student's grade
    string group = "2025 group"; // Default group

public:
    // Setters
    void setName(string n)
    {
        name = n;
    }
    void setAge(int a)
    {
        age = a;
    }
    void setGrade(char g)
    {
        grade = g;
    }

    // Getters
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    char getGrade()
    {
        return grade;
    }

    // Method to display student info
    void displayInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student;
    string name;
    int age;
    char grade;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter student age: ";
    cin >> age;
    cout << "Enter student grade: ";
    cin >> grade;
    student.setName(name);
    student.setAge(age);
    student.setGrade(grade);
    student.displayInfo();
    return 0;
}   
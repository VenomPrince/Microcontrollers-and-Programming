#include <iostream>
#include <cstring> // For strcpy
using namespace std;

struct Student {
    char name[50]; // Student name
    int id;        // Student ID
    float grade;   // Student grade
};

const int MAX_STUDENTS = 100; // Maximum number of students
Student students[MAX_STUDENTS]; // Array to store student records
int studentCount = 0; // Counter for the number of students

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        cout << "No more, Im full" << endl;
        return;
    }
    Student newStudent;
    cout << "Enter student name: ";
    cin.ignore(); // Clear input buffer to avoid issues with leftover newline characters
    cin.getline(newStudent.name, 50); // Read the student name with spaces allowed
    cout << "Enter student ID: ";
    cin >> newStudent.id;
    cout << "Enter student grade: ";
    cin >> newStudent.grade;

    students[studentCount++] = newStudent; // Add the new student to the array
    cout << "Student added successfully!" << endl;
}

void displayAllStudents() {
    if (studentCount == 0) { // Checking if there are no students
        cout << "No students to display." << endl; 
        return;
    }
    cout << "Student Records:" << endl; // If there is students, prints the records
    for (int i = 0; i < studentCount; i++) { // goes through all the students and prints their records
        cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
    } // Prints the records, as i goes from 0 to studentCount
}

void searchStudentByID() { // if user chooses 3 .i.e searching for a student by ID
    if (studentCount == 0) { // Checking if there are no students
        cout << "No students to search." << endl;
        return;
    }
    int searchID; // Declearing a variable to store the ID of the student to be searched
    cout << "Enter student ID to search: ";
    cin >> searchID;

    for (int i = 0; i < studentCount; i++) { // goes through all the students
        if (students[i].id == searchID) { // If the given by user ID matches the ID of the student
            cout << "Student Found: " << endl;
            cout << "Name: " << students[i].name << ", ID: " << students[i].id << ", Grade: " << students[i].grade << endl;
            return; // If the student is found, print the record and exit the function
        }
    }
    cout << "Student with ID " << searchID << " not found." << endl; // If the student is not found, print a message
}

int main() {
    int choice;
    do { //Since this is a do-while loop, It always executes at least once, so it will show the menu at least once
        cout << "\nStudent Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        // Switch statement to handle different choices
            // depends on which option the user chooses and calls the respective function
            // If the user chooses 1, it calls the addStudent function
            // If the user chooses 2, it calls the displayAllStudents function
            // If the user chooses 3, it calls the searchStudentByID function
            // If the user chooses 4, it exits the program
            // If the user chooses any other number, it prints an invalid choice message
            // and asks the user to try again
            // The program will keep running until the user chooses to exit
        switch (choice) { 
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudentByID();
                break;
            case 4:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

//I gave a little more explanation in the comments because i spent a little more time on this :)

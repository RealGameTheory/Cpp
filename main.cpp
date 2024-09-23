#include <iostream>
#include <string>
using namespace std;

// Define the Student class
class Student {
private:
    string name;
    int rollNumber;
    float marks;

public:
    // Method to input student details
    void inputDetails() {
        cout << "Enter student's name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
        cin.ignore(); // To ignore the newline character left in the buffer
    }

    // Method to display student details
    void displayDetails() const {
        cout << "Student's Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    // Create an array of Student objects
    Student students[4];

    // Input details for each student
    for(int i = 0; i < 4; ++i) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        students[i].inputDetails();
        cout << endl;
    }

    // Display details for each student
    cout << "Displaying student details:" << endl;
    for(int i = 0; i < 4; ++i) {
        cout << "Details for student " << i + 1 << ":" << endl;
        students[i].displayDetails();
        cout << endl;
    }

    return 0;
}
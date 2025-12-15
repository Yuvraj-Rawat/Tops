#include <iostream>
using namespace std;

// ===== BASE CLASS =====
class Person {
public:
    string name;
    int age;

    void inputPerson() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ===== DERIVED CLASS - Student =====
class Student : public Person {
public:
    string course;
    float marks;

    void inputStudent() {
        inputPerson();  // Reusability through inheritance
        cout << "Enter course: ";
        cin >> course;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayStudent() {
        displayPerson();  // Reuse base class function
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
    }
};

// ===== DERIVED CLASS - Teacher =====
class Teacher : public Person {
public:
    string subject;
    float salary;

    void inputTeacher() {
        inputPerson();  // Reuse base class function
        cout << "Enter subject: ";
        cin >> subject;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void displayTeacher() {
        displayPerson();  // Reuse base class function
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

// ===== MAIN FUNCTION =====
int main() {
    Student s;
    Teacher t;

    cout << "\n--- Enter Student Details ---\n";
    s.inputStudent();

    cout << "\n--- Enter Teacher Details ---\n";
    t.inputTeacher();

    cout << "\n--- Student Details ---\n";
    s.displayStudent();

    cout << "\n--- Teacher Details ---\n";
    t.displayTeacher();

    return 0;
}


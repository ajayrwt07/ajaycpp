#include <iostream>
#include <string>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1 = {"John", 20, "Computer Science", "Engineering"};
    student1.display();
    return 0;
}

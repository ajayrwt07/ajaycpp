#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Student {
private:
    T name;
    int age;
    T course;
    T department;

public:
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student<string> student1("John", 20, "Computer Science", "Engineering");
    student1.display();
    return 0;
}

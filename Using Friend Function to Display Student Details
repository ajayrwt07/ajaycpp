#include <iostream>
#include <string>
using namespace std;

class Student;

class Details {
public:
    void display(Student& s);
};

class Student {
private:
    string name;
    int age;
    string department;
    string course;

public:
    Student(string n, int a, string d, string c) : name(n), age(a), department(d), course(c) {}

    friend class Details;
};

void Details::display(Student& s) {
    cout << "Name: " << s.name << endl;
    cout << "Age: " << s.age << endl;
    cout << "Department: " << s.department << endl;
    cout << "Course: " << s.course << endl;
}

int main() {
    Student student("Alice", 20, "Computer Science", "Software Engineering");
    Details details;
    details.display(student);
    return 0;
}

#include <iostream>
using namespace std;

class Student {
private:
    int num1, num2;

public:
    Student(int a, int b) {
        num1 = a;
        num2 = b;
    }

    inline int sum() {
        return num1 + num2;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Student student(a, b);
    cout << "Sum: " << student.sum() << endl;

    return 0;
}

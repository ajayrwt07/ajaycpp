#include <iostream>
using namespace std;

class BaseNumbers {
protected:
    int num1, num2;

public:
    BaseNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
};

class DerivedOne : public BaseNumbers {
public:
    DerivedOne(int a, int b) : BaseNumbers(a, b) {}

    void displayFirstNumber() {
        cout << "First number: " << num1 << endl;
    }
};

class DerivedTwo : public BaseNumbers {
public:
    DerivedTwo(int a, int b) : BaseNumbers(a, b) {}

    void displaySecondNumber() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    DerivedOne obj1(a, b);
    DerivedTwo obj2(a, b);

    obj1.displayFirstNumber();
    obj2.displaySecondNumber();

    return 0;
}

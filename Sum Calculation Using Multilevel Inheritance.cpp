#include <iostream>
using namespace std;


class BaseNumber {
protected:
    int num1;

public:
    BaseNumber(int a) {
        num1 = a;
    }
};


class DerivedNumber : public BaseNumber {
protected:
    int num2;

public:
    DerivedNumber(int a, int b) : BaseNumber(a) {
        num2 = b;
    }
};


class SumNumbers : public DerivedNumber {
public:
    SumNumbers(int a, int b) : DerivedNumber(a, b) {}

    void displaySum() {
        cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
    }
};

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    SumNumbers obj(a, b);
    obj.displaySum();

    return 0;
}

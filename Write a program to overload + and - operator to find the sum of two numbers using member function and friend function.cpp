#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int v = 0) : value(v) {}

    Number operator+(const Number &other) {
        return Number(value + other.value);
    }

    Number operator-(const Number &other) {
        return Number(value - other.value);
    }

    friend Number operator+(const Number &n1, const Number &n2) {
        return Number(n1.value + n2.value);
    }

    friend Number operator-(const Number &n1, const Number &n2) {
        return Number(n1.value - n2.value);
    }

    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number num1(10), num2(5);

    Number sumMember = num1 + num2;
    cout << "Sum (member function): ";
    sumMember.display();

    Number diffMember = num1 - num2;
    cout << "Difference (member function): ";
    diffMember.display();

    Number sumFriend = operator+(num1, num2);
    cout << "Sum (friend function): ";
    sumFriend.display();

    Number diffFriend = operator-(num1, num2);
    cout << "Difference (friend function): ";
    diffFriend.display();

    return 0;
}

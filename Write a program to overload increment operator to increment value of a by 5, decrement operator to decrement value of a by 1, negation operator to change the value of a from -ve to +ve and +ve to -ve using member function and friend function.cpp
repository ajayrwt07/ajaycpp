#include <iostream>
using namespace std;

class Number {
private:
    int a;

public:
    Number(int value = 0) : a(value) {}

    Number operator++() {
        a += 5;
        return *this;
    }

    Number operator--() {
        a -= 1;
        return *this;
    }

    Number operator-() {
        a = -a;
        return *this;
    }

    friend Number operator++(Number &num, int) {
        Number temp = num;
        num.a += 5;
        return temp;
    }

    friend Number operator--(Number &num, int) {
        Number temp = num;
        num.a -= 1;
        return temp;
    }

    friend Number operator-(Number &num) {
        num.a = -num.a;
        return num;
    }

    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    Number num(10);

    cout << "Original ";
    num.display();

    ++num;
    cout << "After incrementing by 5 (member function): ";
    num.display();

    num--;
    cout << "After decrementing by 1 (member function): ";
    num.display();

    -num;
    cout << "After negating (member function): ";
    num.display();

    num++;
    cout << "After incrementing by 5 (friend function): ";
    num.display();

    --num;
    cout << "After decrementing by 1 (friend function): ";
    num.display();

    return 0;
}

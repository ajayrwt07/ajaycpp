#include <iostream>
using namespace std;

class A {
protected:
    int valueA;

public:
    A(int a) {
        valueA = a;
    }
};

class B : public A {
protected:
    int valueB;

public:
    B(int a, int b) : A(a) {
        valueB = b;
    }
};

class C : public A {
protected:
    int valueC;

public:
    C(int a, int c) : A(a) {
        valueC = c;
    }
};

class D : public A {
protected:
    int valueD;

public:
    D(int a, int d) : A(a) {
        valueD = d;
    }
};

class E : public B {
public:
    E(int a, int b) : B(a, b) {}

    void displayValues() {
        cout << "Value from class A: " << valueA << endl;
        cout << "Value from class B: " << valueB << endl;
    }
};

int main() {
    E obj(10, 20);
    obj.displayValues();
    return 0;
}

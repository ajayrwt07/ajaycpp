#include <iostream>
#include <string>
using namespace std;

class A {
private:
    int privateA;
protected:
    string protectedA;

public:
    A(int a, const string& str) : privateA(a), protectedA(str) {}

    friend void displayDetails(const A&, const class B&, const class C&);
};

class B {
private:
    double privateB;
protected:
    string protectedB;

public:
    B(double b, const string& str) : privateB(b), protectedB(str) {}

    friend void displayDetails(const class A&, const B&, const class C&);
};

class C {
private:
    char privateC;
protected:
    string protectedC;

public:
    C(char c, const string& str) : privateC(c), protectedC(str) {}

    friend void displayDetails(const class A&, const class B&, const C&);
};

void displayDetails(const A& a, const B& b, const C& c) {
    cout << "Class A: Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    cout << "Class B: Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    cout << "Class C: Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
}

int main() {
    A a(10, "Protected A");
    B b(20.5, "Protected B");
    C c('X', "Protected C");

    displayDetails(a, b, c);

    return 0;
}

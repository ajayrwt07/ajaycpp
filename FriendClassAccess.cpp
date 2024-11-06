#include <iostream>
#include <string>
using namespace std;
 
class B; 
class C; 

class A {
private:
    int privateA;
protected:
    string protectedA;

public:
    A(int a, const string& str) : privateA(a), protectedA(str) {}

    friend class FriendClass;
};

class B {
private:
    double privateB;
protected:
    string protectedB;

public:
    B(double b, const string& str) : privateB(b), protectedB(str) {}

    friend class FriendClass;
};

class C {
private:
    char privateC;
protected:
    string protectedC;

public:
    C(char c, const string& str) : privateC(c), protectedC(str) {}

    friend class FriendClass;
};

class FriendClass {
public:

    void accessA(const A& a) {
        cout << "Class A: Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
    }

    void accessB(const B& b) {
        cout << "Class B: Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
    }

    void accessC(const C& c) {
        cout << "Class C: Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    A a(10, "Protected A");
    B b(20.5, "Protected B");
    C c('X', "Protected C");

    FriendClass friendObj;
    friendObj.accessA(a);
    friendObj.accessB(b);
    friendObj.accessC(c);

    return 0;
}

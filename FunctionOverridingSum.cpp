#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10; 
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;

    basePtr = &derivedObj; 
    cout << "Sum using Derived class object (with 10 added): " 
         << basePtr->sum(5, 10, 15) << endl;

    Base baseObj;
    cout << "Sum using Base class object: " 
         << baseObj.sum(5, 10, 15) << endl;

    return 0;
}

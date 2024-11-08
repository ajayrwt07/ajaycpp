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
        return a + b + c;
    }
};

int main() {
    Base baseObj;
    Derived derivedObj;
    
    Base* basePtr = &derivedObj;
    cout << "Sum using Derived class object (Base class function): " << basePtr->sum(1, 2, 3) << endl;
    
    Derived* derivedPtr = dynamic_cast<Derived*>(&baseObj);
    if (derivedPtr) {
        cout << "Sum using Base class object (Derived class function): " << derivedPtr->sum(4, 5, 6) << endl;
    } else {
        cout << "Dynamic cast failed - cannot call Derived class function from Base class object." << endl;
    }
    
    return 0;
}

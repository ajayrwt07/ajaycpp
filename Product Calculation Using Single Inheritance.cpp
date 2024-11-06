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

class DerivedProduct : public BaseNumbers {
public:
  
    DerivedProduct(int a, int b) : BaseNumbers(a, b) {}

    void displayProduct() {
        int product = num1 * num2;
        cout << "Product of " << num1 << " and " << num2 << " is: " << product << endl;
    }
};

int main() {
    int a, b;

    // Taking input from the user
    cout << "Enter two numbers: ";
    cin >> a >> b;

    DerivedProduct obj(a, b);

    obj.displayProduct();

    return 0;
}

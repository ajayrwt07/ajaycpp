#include <iostream>
using namespace std;

class PrimeChecker;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(Number n) {
        if (n.num <= 1) return false;
        for (int i = 2; i <= n.num / 2; ++i) {
            if (n.num % i == 0) return false;
        }
        return true;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Number number(n);
    PrimeChecker checker;

    if (checker.isPrime(number)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}

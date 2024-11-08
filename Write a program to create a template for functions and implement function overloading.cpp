#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

template <typename T>
T add(T a, T b, T c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 3 and 5: " << add(3, 5) << endl;
    cout << "Sum of 2.5, 3.5, and 4.5: " << add(2.5, 3.5, 4.5) << endl;
    return 0;
}

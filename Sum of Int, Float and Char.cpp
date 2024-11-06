#include <iostream>
using namespace std;

class SumValues {
public:
    SumValues(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }

    SumValues(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }
    
    SumValues(char a, char b) {
        cout << "Concatenation of two characters: " << a << b << endl;
    }
};

int main() {
    // Create objects using different constructors
    SumValues sum1(5, 10);      
    SumValues sum2(3.5f, 2.8f);   
    SumValues sum3('A', 'B');     

    return 0;
}

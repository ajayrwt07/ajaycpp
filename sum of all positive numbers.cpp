#include <iostream>
using namespace std;

class SumPositiveNumbers {
    int* arr;
    int size;
    int sum;

public:
  
    SumPositiveNumbers(int arr[], int n) {
        size = n;
        this->arr = new int[size];
        sum = 0;

        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
            if (arr[i] > 0) {
                sum += arr[i];  // Add only positive numbers
            }
        }
    }

  
    SumPositiveNumbers(const SumPositiveNumbers& obj) {
        size = obj.size;
        arr = new int[size];
        sum = obj.sum;  

        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
    }

    
    void displaySum() {
        cout << "The sum of all positive numbers is: " << sum << endl;
    }

    
    ~SumPositiveNumbers() {
        delete[] arr;
    }
};

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    SumPositiveNumbers original(arr, n);

    SumPositiveNumbers copy = original;

    copy.displaySum();

    return 0;
}

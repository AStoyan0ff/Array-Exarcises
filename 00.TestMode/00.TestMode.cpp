#include <iostream>
using namespace std;

void readArray(int array[], unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cin >> array[i];
}

void printArray(int* array, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cout << array[i] << ' ';
    cout << endl;
}

int main() {

    int N;
    cin >> N;

    const int maxSize = 100;
    int arr[maxSize]{}, arr2[maxSize]{};

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        if (i % 2 == 0) {
            arr[i] = b;
            arr2[i] = a;
        }
        else {
            arr[i] = a;
            arr2[i] = b;
        }
    }

    printArray(arr2, N);
    printArray(arr, N);
        
    return 0;
}
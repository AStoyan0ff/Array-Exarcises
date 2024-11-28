#include <iostream>
using namespace std;


void readArray(int array[], unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cin >> array[i];
}

void printArray(int* arr, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cout << arr[i] << ' ';
    cout << endl;
}

int main() {

	int N; cin >> N;
    const int maxSize = 100;
    int arr[maxSize]{};

    readArray(arr, N);

   // for (int i = 0; i < N; i++) {
   //     for (int i2 = 0; i2 < N; i2++) {
   //         cout << arr[i] * arr[i2] << ' ';
     //   }
   // }

    for (int n : arr) {
        for (int b : arr) {
            cout << n * b << ' ';
        }
    }
    cout << '\n';

    return 0;
}

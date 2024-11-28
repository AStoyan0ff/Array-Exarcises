#include <iostream>
using namespace std;

void readArray(int arr[], unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cin >> arr[i];
}

void printArray(int* arr, unsigned size) {
    for (unsigned i = 0; i < size; i++)
        cout << arr[i] << ' ';
}

//void rotateArray(int* arr, unsigned size) {
//
//    if (size <= 1) {
//        return;
//    }
//
//    int first = arr[0];
//
//    for (int i = 1; i < size; i++) {
//        arr[i - 1] = arr[i];
//    }
//    arr[size - 1] = first;
//}
int main() {

    int N; cin >> N;
    const int maxSize = 100;
    int arr[maxSize];{}

    readArray(arr, N);

    int rotation; cin >> rotation;

   /* while (rotation--) {
        rotateArray(arr, N);
    }*/

   // printArray(arr, N);

    int start = rotation % N;
    
    for (int i = start; i < N; i++) {
        cout << arr[i] << ' ';
    }
    for (int i = 0; i < N; i++) {
        cout << arr[i] << ' ';
    }


	return 0;
}

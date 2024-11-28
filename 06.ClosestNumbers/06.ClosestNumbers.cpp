#include <iostream>
//#include <algorithm>
#include <climits>
using namespace std;

void readArray(int arr[], unsigned size) {
	for (unsigned i = 0; i < size; i++)
		cin >> arr[i];
}

void printArray(int* arr, unsigned size) {
	for (unsigned i = 0; i < size; i++)
		cout << arr[i] << ' ';
	
}

int main() {

	int N;
	cin >> N;
	
	const int maxSize = 100;
	int arr[maxSize]{};

	readArray(arr, N);
		
	int minDiff = INT_MAX;

	if (N == 1) {
		cout << 0 << endl;
		return 0;
	}

	for (int a = 0; a < N; a++) {
		for (int b = a + 1; b < N; b++) {
			int diff = abs(arr[a] - arr[b]);
			
			if (diff < minDiff) {
				minDiff = diff;
			}
		}
	}
		
	cout << minDiff << endl;;

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	
	short N; cin >> N;
	short maxSize[10]{};

	for (short i = 0; i < N; i++) {
		short currNum;
		cin >> currNum;

		maxSize[currNum]++;
	}
	
	short maxN = 0;

	for (short i = 0; i < 10; i++) {
		if (maxSize[i] > maxN)
			maxN = maxSize[i];
	}
	
	for (short i = 0; i < 10; i++) {
		if (maxSize[i] == maxN)
			cout << i << ' ';
	}

	cout << '\n';

	return 0;
}

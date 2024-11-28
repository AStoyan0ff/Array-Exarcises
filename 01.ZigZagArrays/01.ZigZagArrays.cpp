#include <iostream>
#include <vector>
using namespace std;

int main() {

    int N;
    cin >> N;

    if (N >= 100) {
        cout << N << endl;
        return N;
    }

    vector<int> arrayOne(N);
    vector<int> arrayTwo(N);

    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;

        arrayOne[i] = a;
        arrayTwo[i] = b;
    }

    for (int i = 0; i < N; i++) {
        cout << (i % 2 == 0 ? arrayOne[i] : arrayTwo[i]);

        if (i < N - 1) cout << " ";
    }
    cout << endl;

    for (int i = 0; i < N; i++) {
        cout << (i % 2 == 0 ? arrayTwo[i] : arrayOne[i]);

        if (i < N - 1) cout << " ";
    }
    cout << endl;

    return 0;
}





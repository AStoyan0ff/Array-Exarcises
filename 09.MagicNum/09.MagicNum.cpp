#include <iostream>
using namespace std;

int main() {

    int N; cin >> N;
    
    if (N >= 100 || N <= 0) {
        cout << N << endl;
        return N;
    }

    int arr[100]{}; 
        
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    int magicNum;
    cin >> magicNum;
        
    for (int start = 0; start < N; start++) {
        for (int end = start + 1; end < N; end++) {
            // Алгоритъма за намиране на уник. двойки
            if (arr[start] + arr[end] == magicNum) {
                cout << arr[start] << " " << arr[end] << endl;
            }
        }
    }
    cout << endl;

    return 0;
}

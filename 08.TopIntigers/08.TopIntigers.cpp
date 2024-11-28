#include <iostream>
using namespace std;

int main() {
    
    int N; cin >> N;
    
    if (N >= 100 || N <= 0) {
        cout << N << endl;
        return N;
    }
    
   
    int arr[100]{};

    for (int i = 0; i < N; i++) { // ����� ������ ��� ������� "readArray"
        cin >> arr[i];
    }
        
    for (int i = 0; i < N; i++) { // ���������� �� ��� ������� 
        bool isTopInteger = true;

        // �������� ���� �������� ����� � ��-������ �� ������ ������ �� ����
        for (int curr = i + 1; curr < N; curr++) {
            if (arr[i] <= arr[curr]) {
                isTopInteger = false;
                break;
            }
        }

        if (isTopInteger) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;

	return 0;
}

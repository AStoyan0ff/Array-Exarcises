#include <iostream>
using namespace std;

int main() {
    
    int N;
    cin >> N;

    if (N >= 100) {
        cout << N << endl;
        return N;
    }

    // ����������� 
    int arr[100]{};
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // ���������� �� ������� �� ���-������� ����������������
    int maxLength = 1;
    int currentLength = 1;
    int bestElement = arr[0];
        
    for (int i = 1; i < N; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        }
        else {
            currentLength = 1;
        }

        // ��� ������� ��-����� ��� ����� ����������������, ��������� ��������
        if (currentLength >= maxLength) {
            maxLength = currentLength;
            bestElement = arr[i];
        }
    }
        
    for (int i = 0; i < maxLength; i++) {
        cout << bestElement << " ";
    }
    cout << endl;

    return 0;
}

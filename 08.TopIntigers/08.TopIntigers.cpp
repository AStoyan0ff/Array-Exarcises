#include <iostream>
using namespace std;

int main() {
    
    int N; cin >> N;
    
    if (N >= 100 || N <= 0) {
        cout << N << endl;
        return N;
    }
    
   
    int arr[100]{};

    for (int i = 0; i < N; i++) { // Четем масива без функция "readArray"
        cin >> arr[i];
    }
        
    for (int i = 0; i < N; i++) { // Принтиране на топ числата 
        bool isTopInteger = true;

        // Проверка дали текущото число е по-голямо от всички вдясно от него
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

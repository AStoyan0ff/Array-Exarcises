#include <iostream>
using namespace std;

int main() {
   
    int N; cin >> N;
    
    int result = 0;
    const int maxSize = 100;
    int arr[maxSize]{};
    
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        result += arr[i];
    }

    result /= N;

    for (int i = 0; i < N; i++) {
        if (arr[i] >= result)
            cout << arr[i] << ' ';
    }
         
    cout << endl;
    
    return 0;
}

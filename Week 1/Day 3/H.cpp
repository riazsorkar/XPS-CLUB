#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    int arr[100000];
    long long total_sum = 0;
    int smallest_odd = 1000000001; 
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        total_sum += arr[i];
        if (arr[i] % 2 != 0) { 
            if (arr[i] < smallest_odd) {
                smallest_odd = arr[i];
            }
        }
    }
    if (total_sum % 2 == 0) {
        cout << total_sum << endl;
    } else {
        if (smallest_odd != 1000000001) { 
            cout << total_sum - smallest_odd << endl;
        } else {
            cout << 0 << endl;
        }
    }

    return 0;
}

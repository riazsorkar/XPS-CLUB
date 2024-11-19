#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int sub_array = n * (n + 1) / 2;
    cout << "Number Of Subarrays = " << sub_array << '\n';

    vector<vector<int>> matrix;
    vector<int> sums;           
    for (int l = 0; l < n; l++) {
        vector<int> sub;
        int current_sum = 0;
        for (int r = l; r < n; r++) {
            sub.push_back(a[r]);
            current_sum += a[r]; 
            matrix.push_back(sub);
            sums.push_back(current_sum); 
        }
    }

    for (size_t i = 0; i < matrix.size(); i++) {
        for (int val : matrix[i]) {
            cout << val << " ";
            
        }
        cout << "-> " << sums[i] << '\n';
    }

    return 0;
}

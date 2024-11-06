#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long t;
    cin >> t; 
    while (t--) {
        long n;
        cin >> n;
        vector<long> a(n);
        
        for (long p = 0; p < n; p++) {
            cin >> a[p];
        }

        long left = 0, right = n - 1;
        long mn = 1, mx = n;

        while (left < right) {
            if (a[left] == mn) {
                ++left;
                ++mn;
            } else if (a[right] == mn) {
                --right;
                ++mn;
            } else if (a[left] == mx) {
                ++left;
                --mx;
            } else if (a[right] == mx) {
                --right;
                --mx;
            } else {
                break;
            }
        }

        if (left < right) {
            cout << (left + 1) << " " << (right + 1) << endl;
        } else {
            cout << "-1" << endl;
        }
    }

    return 0;
}

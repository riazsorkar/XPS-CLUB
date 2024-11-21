#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;

        
        long long coin = min(a, s / n);
        long long cng = s - coin * n;

        
        if (cng <= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}

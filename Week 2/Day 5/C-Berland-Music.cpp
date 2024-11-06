#include <bits/stdc++.h>

using namespace std;

int main() {
    const long M = 1e7;
    long t;
    cin >> t;

    while (t--) {
        long n;
        cin >> n;
        vector<pair<long, long>> v(n);

        for (long p = 0; p < n; p++) {
            cin >> v[p].first;
            v[p].second = p;
        }

        string s;
        cin >> s;

        for (long p = 0; p < n; p++) {
            v[p].first += M * (s[p] - '0');
        }

        sort(v.begin(), v.end());
        vector<long> w(n, 0);

        for (long p = 0; p < n; p++) {
            w[v[p].second] = p + 1;
        }

        for (long p = 0; p < n; p++) {
            cout << w[p] << " ";
        }

        cout << endl;
    }

    return 0;
}

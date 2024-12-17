#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        vector<int> valid;
        for (auto [num, count] : freq) {
            if (count >= k) valid.push_back(num);
        }

        if (valid.empty()) {
            cout << -1 << "\n";
            continue;
        }

        int l = valid[0], r = valid[0], start = valid[0], max_len = 0;

        for (int i = 1; i < valid.size(); i++) {
            if (valid[i] == valid[i - 1] + 1) {
                if (valid[i] - start > max_len) {
                    l = start;
                    r = valid[i];
                    max_len = valid[i] - start;
                }
            } else {
                start = valid[i];
            }
        }

        cout << l << " " << r << "\n";
    }
    return 0;
}
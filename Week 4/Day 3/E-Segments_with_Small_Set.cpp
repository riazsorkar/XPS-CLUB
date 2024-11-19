#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    while (cin >> n >> k) {
        vector<int> arr(n);
        for (decltype(n) i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        decltype(n) l = 0;
        int long long res = 0;
        unordered_map<int, int> cnt{};
        for (decltype(n) r = 0; r < n; ++r) {
            ++cnt[arr[r]];
            while (cnt.size() > k) {
                --cnt[arr[l]];
                if (cnt[arr[l]] == 0) {
                    cnt.erase(arr[l]);
                }
                ++l;
            }
            res += (r - l + 1);
        }
        cout << res << endl;
    }
    return 0;
}
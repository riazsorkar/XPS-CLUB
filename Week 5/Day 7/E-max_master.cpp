#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        long zero = 0;
        bool one = false, large = false;

        for (long i = 0; i < n; ++i) {
            long x;
            cin >> x;
            if (x == 0) {
                ++zero;
            } else if (x == 1) {
                one = true;
            } else if (x > 1) {
                large = true;
            }
        }

        long ans = 0;
        if (zero > (n + 1) / 2) {
            if (!one || large) {
                ans = 1;
            } else {
                ans = 2;
            }
        }

        cout << ans << endl;
    }
    return 0;
}
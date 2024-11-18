#include<bits/stdc++.h>
using namespace std;


int main () {
    int t;
    cin>>t;
    while (t--) {
        long long n, k, q;
        cin>>n>>k>>q;
        long long days = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a <= q) {
                days++;
            } else if (a > q && days >= k) {
                long long d = (days - k) + 1;
                ans += ((d * (d + 1)) / 2);
                days = 0;
            } else {
                days = 0;
            }
        }
        if (days >= k) {
            long long d = (days - k) + 1;
            ans += ((d * (d + 1)) / 2);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
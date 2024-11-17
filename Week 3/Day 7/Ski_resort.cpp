#include<bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin>>t;
    while (t--) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        long long n, a, b;
        cin>>n>>a>>b;
        long long days = 0, ans = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin>>a;
            if (a <= b) {
                days++;
            } else if (a > b && days >= a) {
                long long d = (days - a) + 1;
                ans += ((d * (d + 1)) / 2);
                days = 0;
            } else {
                days = 0;
            }
        }
        if (days >= a) {
            long long d = (days - a) + 1;
            ans += ((d * (d + 1)) / 2);
        }
        cout<<ans<<'\n';
    }
    return 0;
}
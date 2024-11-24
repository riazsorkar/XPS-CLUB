#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, h;
    cin >> a >> h;

    const ll mod = 998244353;

    ll ra = 1, ba = 2;
    ll rh = 1, bh = 2;

    
    while (a) {
        if (a & 1)
            ra = (ra * ba) % mod;
        ba = (ba * ba) % mod;
        a >>= 1;
    }

    
    while (h) {
        if (h & 1)
            rh = (rh * bh) % mod;
        bh = (bh * bh) % mod;
        h >>= 1;
    }

    cout << (ra * rh) % mod << endl;

    return 0;
}

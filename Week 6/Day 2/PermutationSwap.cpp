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

        long g = 0;
        for (long p = 1; p <= n; p++) {
            long x;
            cin >> x;
            long dz = abs(p - x);

            while (dz) {
                long temp = g % dz;
                g = dz;
                dz = temp;
            }
        }

        cout << g << "\n";
    }

    return 0;
}
#include <bits/stdc++.h>

using namespace std;
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t; 
    cin >> t;
    while(t--){
        long long n; 
        cin >> n;
        string s; 
        cin >> s;
        vector<long long> dif(n, 0);
        long long total(0);
        for(long long p = 0; p < n; p++){
            long long cur = (s[p] == 'L') ? p : n - p - 1;
            long long mx = (p > (n - p - 1)) ? p : (n - p - 1);
            total += cur;
            long long diff = mx - cur;
            dif[p] = diff;
        }

        sort(dif.rbegin(), dif.rend());

        for(long long p = 0; p < n; p++){
            total += dif[p];
            cout << total << " ";
        }
        cout << endl;

    }

}
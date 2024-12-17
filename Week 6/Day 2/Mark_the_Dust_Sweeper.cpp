#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto& i : v)
        {
            cin >> i;
        }
        bool ok = false;
        long long sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i]) ok = true;
            if(ok && v[i] == 0)
                sum++;
            else
                sum += v[i];
        }
        cout << sum << '\n';
    }
    return 0;
}
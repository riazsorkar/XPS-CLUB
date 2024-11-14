#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long t = 1;
    cin >> t;
    while (t--)
    {
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    long long ans = 0;

    for (long long i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            ans++;
            i += k - 1;
        }
    }
    cout << ans << '\n';
    }
}
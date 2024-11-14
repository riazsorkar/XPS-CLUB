#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long  t = 1;
    cin >> t;
    while (t--) 
    {
    long long  n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    vector<long long > preSum(n + 1);

    for (int i = 1; i <= n; i++)
    {
        long long  curr = 0;
        if (s[i - 1] == 'W')
            curr = 1;

        preSum[i] = preSum[i - 1] + curr;
    }

    long long  res = INT_MAX;

    for (int i = k; i <= n; i++)
    {
        long long  curr = preSum[i] - preSum[i - k];
        res = min(res, curr);
    }

    cout << res << '\n';
    }

}
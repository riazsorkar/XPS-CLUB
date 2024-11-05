#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int n, k;
        cin >> n >> k;
        vector<long long int> a(n);

        map<long long int, long long int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];

            if (mp1[a[i]] == 0)
            {
                mp1[a[i]] = i + 1; 
            }
            mp2[a[i]] = i + 1; 
        }

        int x, y;
        while (k--)
        {
            cin >> x >> y;
            if (mp1[x] > 0 && mp1[y] > 0 && mp1[x] < mp2[y])
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}

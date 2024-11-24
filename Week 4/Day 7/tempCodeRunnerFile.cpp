#include <bits/stdc++.h>
using namespace std;

using ll = long long int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        vector<pair<int, int>> v;

        
        for (int i = 0; i < n; i++)
        {
            v.push_back({s[i] - 'a' + 1, i + 1});
        }

        
        if (s[0] > s[n - 1])
        {
            sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
                if (a.first == b.first)
                    return a.second < b.second;
                return a.first > b.first;
            });
        }
        else
        {
            sort(v.begin(), v.end(), [](pair<int, int> &a, pair<int, int> &b) {
                if (a.first == b.first)
                    return a.second < b.second;
                return a.first < b.first;
            });
        }

        
        for (int i = 0; i < n; i++)
        {
            if (v[i].second == n)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (v[j - 1].first == v[j].first)
                    {
                        swap(v[j - 1], v[j]);
                    }
                }
            }
        }

        
        int cost = 0;
        vector<int> ans;
        bool started = false;
        int prev = 0;

        for (int i = 0; i < n; i++)
        {
            auto p = v[i];
            if (p.second == 1)
            {
                started = true;
                prev = p.first;
                ans.push_back(p.second);
            }
            else if (started)
            {
                cost += abs(prev - p.first);
                prev = p.first;
                ans.push_back(p.second);
            }

            if (p.second == n)
                break;
        }
        cout << cost << " " << ans.size() << endl;
        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t;
    cin >> t;

    while (t--) 
    {
        long long int n;
        cin >> n;

        long long int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int freq[26] = {0};
        int curr = 0;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                cout << char('a' + curr);
                freq[curr]++;
                curr++;
            }
            else
            {
                for (int j = 0; j < 26; j++)
                {
                    if (freq[j] == arr[i])
                    {
                        cout << char('a' + j);
                        freq[j]++;
                        break;
                    }
                }
            }
        }
        cout << '\n';
    }

    return 0;
}

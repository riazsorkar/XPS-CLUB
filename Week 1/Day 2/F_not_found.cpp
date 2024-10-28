#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool a[26] = {false};

    for (char ch : s)
    {
        a[ch - 'a'] = true;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (!a[i - 'a'])
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}
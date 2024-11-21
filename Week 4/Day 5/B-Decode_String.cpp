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
        string s;
        cin >> s;
        string ans;
        for(int i = 0; i < n;)
        {
            if(s[i + 2] == '0' && (i + 3 >= n || s[i + 3] != '0'))
            {
                int num = (s[i] - '0') * 10 + (s[i + 1] - '0');
                ans += 96 + num;
                i += 3;
            }
            else
            {
                ans += 96 + (s[i] - '0');
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}

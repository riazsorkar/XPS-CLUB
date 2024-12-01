#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int t = 1;
    cin >> t;
    while (t--) 
    {
    long long int n;
    cin >> n;

    string a, b, c;
    cin >> a >> b >> c;

    bool flag = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] != c[i] && b[i] != c[i])
        {
            flag = 1; break;
        }
    }
    
    if (flag)
        cout << "YES"<<'\n';
    else
        cout << "NO"<<'\n';
    }

return 0;

}
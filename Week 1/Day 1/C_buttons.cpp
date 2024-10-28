#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int ans = 0;
    int test = 2;
    while(test -- )
    {
        if(a>b)
        {
            ans += a--;
        }
        else
        {
            ans += b--;
        }
    }
    cout << ans<<endl;
}

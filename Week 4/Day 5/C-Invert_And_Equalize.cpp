#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0, zero = 0, i=0;
        while(i<n){
            int point = s[i];
            while(i<n && s[i] == point){
                i++;
            }

            if(point == '0'){
                zero++;
            }else{
                one++;
        }
    }
    int ans = min(one,zero);
    cout << ans << '\n';
    }
    
    return 0;
}
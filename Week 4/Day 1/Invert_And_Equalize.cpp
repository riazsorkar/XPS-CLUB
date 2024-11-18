#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) {
        int n;
        string num;
        cin >> n >> num;
        int min = 0;
        for(int i = 1; i < n; ++i) {
            if(num[i] != num[i-1]) 
                min++; 
        }
        
        cout << (min+1) / 2 << endl;
    }
    return 0;
}
#include <bits/stdc++.h> 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;                  
    long long s;           
    cin >> n >> s;          
    
    vector<int> v(n);       
    for (int &x : v) cin >> x; 
    
    int l = 0;             
    long long sum = 0;      
    long long ans = 0;      


    for (int i = 0; i < n; i++) {
        sum += v[i];
        
  
        while (sum >= s) {
            sum -= v[l];
            l++;
        }

        ans += l;
    }
    
    cout << ans << endl;
    return 0;
}

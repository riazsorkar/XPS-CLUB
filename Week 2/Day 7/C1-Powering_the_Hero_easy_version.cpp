#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        long long int n,r=0;
        cin >> n;
        vector<long long int> a(n);
        priority_queue<long long int> pq;
        for(int i = 0; i < n; i++){
                cin >> a[i];
            }
        long long sum =0;
        for(int i = 0; i < n; i++){
                if(a[i]==0){
                    if(pq.empty()){
                        continue;
                    }
                sum+=pq.top();
                pq.pop();
                }else{
                    pq.push(a[i]);
                }
            }
        cout << sum << "\n";
    }
    return 0;
}
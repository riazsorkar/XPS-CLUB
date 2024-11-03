#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
            if(x==m){
            }else{
                arr.push_back(x);
            }
    }

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << '\n';
    }

    if (arr.empty()){
        cout << "";
    } 



    // map<int,int> mp; 
    // int list [n];
    // for (int i = 0 ; i<n; i++){
    //     cin >> list[i];
    //     if(list[i] == m){

    //     }else{
    //         mp.insert({i,list[i]});
    //     }
    // }
    // for(int i = 0; i<n; i++){
    //     cout << mp[i] << " ";
    // }
    
    return 0;
}
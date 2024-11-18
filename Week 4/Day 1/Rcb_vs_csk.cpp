#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,sub;
    cin >> x >> y;
    sub = x-y;

    if(sub<18){
        cout << "CSK" << '\n';
    }else if(sub >= 18){
        cout << "RCB" << '\n';
    }
    return 0;
}
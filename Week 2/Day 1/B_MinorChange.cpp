#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a,b;
    cin >> a >> b;
    int x = a.size();

    int count = 0;
    for(int i=0; i<x; i++){
        if(a[i]!=b[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
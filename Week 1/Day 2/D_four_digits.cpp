#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int num_size = 4 - s.size();
    for(int i=1; i<=num_size;i++){
        cout << "0";
    }
    cout << s;
    return 0;
}
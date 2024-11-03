#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map <string, int> reg;
    string s;
    while ( n--){
        cin >> s;
        if (reg.count(s)==0){
            cout << "OK" << endl;
            reg[s] = 1;
        }else{
            cout << s << reg[s] << endl;
            reg[s]+= 1;
        }
    }
    return 0;
}
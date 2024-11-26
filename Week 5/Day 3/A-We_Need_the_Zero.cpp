#include<bits/stdc++.h>
using namespace std;

void ans(){
     long long int n;
    cin >> n;

    long long int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    long long int xOR = 0;
    for (int i = 0; i < n; i++)
        xOR = (arr[i] ^ xOR);

    if (xOR == 0)
        cout << 0 << '\n';
    else if (n & 1)
        cout << xOR << '\n';
    else
        cout << -1 << '\n';

}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int test; cin >> test;
    while(test--){
        ans();
    }
    return 0;
}
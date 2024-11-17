#include<bits/stdc++.h>
using namespace std;


int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while (t--) {
        int a;
        cin>>a;
        int arr[a];
        long long sum = 0, op = 0;
        for (int i = 0; i < a; i++) {
            cin>>arr[i];
            if (arr[i] >= 0) {
                sum += arr[i];
            } else {
                sum += -arr[i];
            }
        }
        for (int i = 0; i < a; i++) {
            if (arr[i] < 0) {
                op++;
                while (arr[i] <= 0) {
                    i++;
                }
            }
        }
        cout<<sum<<" "<<op<<'\n';
    }
    return 0;
}
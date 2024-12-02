#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        
        for (int i = 0; i < n; i++) {
            a.push_back(a[i]);
        }

        bool flag = false;

       
        for (int start = 0; start < n; start++) {
            bool sorted = true;
            int last = -1e6;
            for (int i = start; i < start + n; i++) {
                if (a[i] < last) {
                    sorted = false;
                    break;
                }
                last = a[i];
            }
            if (sorted) {
                flag = true;
                break;
            }
        }

        if (flag) {
            cout << "Yes" <<"\n";
        } else {
            cout << "No" <<"\n";
        }
    }

    return 0;
}
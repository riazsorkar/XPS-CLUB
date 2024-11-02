#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while (t--) {
        string x, y = "";
        cin >> x;
        stack<char> lc, uc;
        for (int i = x.size() - 1; i >= 0; i--) {
            if (x[i] == 'b') {
                lc.push(x[i]);
            } 
            else if (x[i] == 'B') {
                uc.push(x[i]);
            } 
            else {
                if (x[i] >= 'a' && x[i] <= 'z') {
                    if (!lc.empty()) {
                        lc.pop(); 
                    } else {
                        y += x[i];
                    }
                } 
                else if (x[i] >= 'A' && x[i] <= 'Z') {
                    if (!uc.empty()) {
                        uc.pop();
                    } else {
                        y += x[i];
                    }
                }
            }
        }
        reverse(y.begin(), y.end());
        
        cout << y << "\n";
    }

    return 0;
}

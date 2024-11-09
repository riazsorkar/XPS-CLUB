#include <bits/stdc++.h>
using namespace std;

int n, m;
void work() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n;
    printf("2\n%d %d\n", n, n - 1);
    for (int i = n - 2; i; --i)
        cout << i << " " << i + 2 << endl;
}   

int main() {
    int T; cin >> T;
    while (T--) work(); 
    return 0;
} 

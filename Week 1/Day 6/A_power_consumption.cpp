#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;

    int t_pw = 0;
    int p_end = 0;

    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;

        int w_dr = r - l;
        t_pw += w_dr * p1;

        if (i > 0) {
            int i_dr = l - p_end;

            if (i_dr <= t1) {
                t_pw += i_dr * p1;
            } else if (i_dr <= t1 + t2) {
                t_pw += t1 * p1 + (i_dr - t1) * p2;
            } else {
                t_pw += t1 * p1 + t2 * p2 + (i_dr - t1 - t2) * p3;
            }
        }
        p_end = r;
    }

    cout << t_pw << endl;

    return 0;
}

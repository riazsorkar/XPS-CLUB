#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   long long k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0;i < n;i++) {
      cin >> a[i];
   }

   int l = 0, r = 0;
   vector <int> z(100);
   long long sum = 0;
   while (r < n) {
      sum += a[r];
      if (sum >= k) {
        //  ans = max(ans, r - l + 1);
        a.push_back(r - l + 1);
      }
      else {
         sum -= a[l];
         l++;
      }
      r++;
   }

   for(int i = 0; i < 10; i++){
        cout << z[i] << " ";       
    }

   return 0;
}
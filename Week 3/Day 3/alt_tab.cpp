#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	    int n;
	    cin>>n;
	    vector<string>a(n), ans;
        set<string>s;
	    for(int i=0;i<n;i++){
            cin>>a[i];
        }
	     
	     for(int i=n-1;i>=0;i--)
	     {
	        int len=a[i].length();
	        string suffix=a[i].substr(len-2,2);
	        if(s.find(a[i])==s.end())
	        {
	            ans.push_back(suffix);
	            s.insert(a[i]);
	        }
	     }
	     for(auto it:ans){
            cout<<it;
         }
	  
	
	return 0;
}

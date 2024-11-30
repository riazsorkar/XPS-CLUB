#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int x=0;x<n;x++)
            cout<<char('A'+x/2);
        cout<<"\n";
    }
    return 0;
}
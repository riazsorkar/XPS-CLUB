#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long test,n,m,i;
    cin>>test;
    while(test--)
    {
        cin>>n>>m;
        if(m<n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(n%2==1)
        {
            cout<<"YES"<<endl;
            for(i=0;i<n-1;i++)
                cout<<1<<" ";
                cout<<m-n+1<<endl;
        }
        else
        {
            if((m-n+2)%2!=0)
            {
                cout<<"NO"<<endl;
                continue;
            }
            cout<<"YES"<<endl;
            for(i=0;i<n-2;i++)
                cout<<1<<" ";
                cout<<(m-n+2)/2<<" "<<(m-n+2)/2<<endl;
        }
    }
    return 0;
}
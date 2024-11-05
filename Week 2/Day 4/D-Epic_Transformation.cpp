#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long t,a[N];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	cin>>t;
	while(t--){
		int x;
		map<int,int>p;
		cin>>x;
		for(int i=1;i<=x;i++)cin>>a[i],p[a[i]]++;
		priority_queue<int,vector<int>,less<int> >q;
		for(auto it:p)q.push(it.second);
		if(q.size()==1){
			cout<<q.top()<<endl;
		}
		else if(q.size()==2){
			int a=q.top();q.pop();
			cout<<a-q.top()<<endl;
		}
		else{
            int flag=0;
			while(q.size()>1){
				int a=q.top();q.pop();
				int b=q.top();q.pop();
				if(q.empty()){
                        flag=1;
                    cout<<a-b<<endl;
                    break;
				}
				int c=q.top();
				int sub=b-c+1;
				if(a-sub!=0)q.push(a-sub);
				if(b-sub!=0)q.push(b-sub);
			}
			if(!flag)cout<<q.top()<<endl;
		}


	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
  int a,b,c;
  cin>>a>>b>>c;
  bool ishere = false;
  for(int i=a; i<=b; i++){
        if(i%c == 0)
        {
             cout<<i<<endl;
             ishere = true;
             break;
        }
  }
  
  if(!ishere){
    cout<<"-1";
  }

  return 0;
}

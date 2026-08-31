#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        bool ok=false;
        for(int i=0;i<10;i++){
            if(x.find(s)!=-1){
                ok=true;
                cout<<i<<endl;
                break;
            }
            x+=x;
        }

      if(ok==false){
        cout<<"-1"<<endl;
      }
    }
    return 0;
}
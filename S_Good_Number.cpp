#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,K,ok=1,ans=0;
    cin>>T>>K;
    while(T--){
        string S;
        bool seen[10]={false};
        cin>>S;
        for(int i=0;i<10;i++){
            seen[i-'0']=true;
        }
        for(int i=0;i<K;i++){
            if(!seen[i]){
                ok=0;
                break;
            }
        }
        if(ok==1){
          ans++;
        }
        cout<<ans<<endl;

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,cnt[200005];
    cin>>t;
    while(t--){
         int n,k;
         cin>>n>>k;
         string s;
         cin>>s;
         for(int i=0;i<k;i++){
            cnt[i]=0;

         }
         for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt[i%k]++;
            }
         }
         bool ok=true;
         for(int i=0;i<k;i++){
            if(cnt[i]&1){
                ok=false;
                break;
            }
         }
         cout<<(ok?"YES":"NO")<<endl;
    }
    cout<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,cntw=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(int i=0;i<k;i++){
            if(s[i]=='W'){
                cntw++;
            }
            
        }
        int ans=cntw;

        for(int i=k;i<n;i++){
            if(s[i-k]=='W'){
                cntw--;
            }
            if(s[i]=='W'){
            cntw++;
            }
            ans=min(ans,cntw);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
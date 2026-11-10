#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        bool inc=false,dec=false;

        cin>>s;
        int n=s.size();
        for(int i=1;i<n-1;i++){
            if(s[i]==s[i-1] && s[i]==s[i+1]){
                inc=true;

            }
            else if(s[i-1]==s[i+1]&&s[i]!=s[i-1]){
                dec=true;
            }
            
        }
        int ans=1+inc+dec;
        cout<<ans<<endl;
    }
    return 0;
}
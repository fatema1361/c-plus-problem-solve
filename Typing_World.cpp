#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        string S,L;
        cin>>S;
        cin>>L;
        map<char,int>mp;
        int cnt=0,ans=0;
        char prev=' ';
        for(char c:L){
            mp[c]=1;
        }
        for(char c:S){
            char hand;
            if(mp[c]==1){
                hand='L';
            }
            else{
                hand='R';
            }
            if(hand==prev){
                cnt++;
            }
            else{
                cnt=1;
            }
            ans=max(ans,cnt);
            prev=hand;
        }
        cout<<ans<<endl;


    }
    return 0;
}
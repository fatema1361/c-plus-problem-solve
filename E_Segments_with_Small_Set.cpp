#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin>>n>>k;
    int in[100005];
    for(int i=0;i<n;i++){
        cin>>in[i];
    }
    int l=0;
    long long ans=0;
    map<int,int>mp;
    for(int r=0;r<n;r++){
        mp[in[r]]++;
        while(mp.size()>k){
            mp[in[l]]--;

            if(mp[in[l]]==0){
                mp.erase(in[l]);
            }
            l++;
        }
        ans+=r-l+1;
    }
    cout<<ans<<endl;
    return 0;
}
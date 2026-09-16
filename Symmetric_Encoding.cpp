#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string b;
        cin>>b;
        string r=b;
        sort(r.begin(),r.end());
        r.erase(unique(r.begin(),r.end()),r.end());
        map<char,char>mp;
        int m=r.size();
        for(int i=0;i<m;i++){
            mp[r[i]]=r[m-i-1];
        }

       for(int i=0;i<n;i++){
        b[i]=mp[b[i]];
       }
        cout<<b<<endl;
    }
    return 0;
}
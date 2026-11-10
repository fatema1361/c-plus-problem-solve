#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s1,s2;
        cin>>s1>>s2;
        if(s1.size()!=s2.size()){
            cout<<"NO"<<endl;
            continue;
        }
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        // int cnt[26]={0};
        // for(int i=0;i<s1.size();i++){
        //     cnt[s1[i]-'a']++;
        //     cnt[s2[i]-'a']--;
        // }
        // bool ok=true;
        // for(int i=0;i<26;i++){
        //     if(cnt[i]!=0){
        //         ok=false;
        //         break;
        //     }
        // }
        // if(ok){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
    }
    return 0;
}
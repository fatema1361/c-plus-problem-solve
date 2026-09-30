#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k>n){
            cout<<-1<<endl;
            continue;
        }
        int cnt=0;
        for(int i=0;i<k;i++){
            if(s[i]=='L'){
                cnt++;
            }
        }
        for(int i=n-k;i<n;i++){
            if(s[i]=='R'){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
        
    return 0;
}
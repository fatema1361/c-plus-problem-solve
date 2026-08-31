#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        char s[n];
        for(int i=1;i<n;i++){
            cin>>s[i];
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        int final=count;
        for(int i=1;i<=n-2;i++){
            int count2=final;
            if(s[i-1]==s[i+1]&&s[i]!=s[i-1]){
               count2--;
            }
            final=min(final,count2);
        }
        cout<<final<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    if(n%2==0){
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans=s[i]+ans;
            }
            else{
                ans=ans+s[i];
            }
        }

    }
    else{
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans=ans+s[i];
            }
            else{
                ans=s[i]+ans;
            }
        }

    }
    cout<<ans<<endl;
    return 0;
}
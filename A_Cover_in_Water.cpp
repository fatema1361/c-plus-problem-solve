#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
         cin>>s;
         int ans=0,count=0;
         for(int i=0;i<n;i++){
             if(s[i]=='.'){
               count++;
               ans++; 
             }
             else{
                count=0;
             }
             if(count>=3){
                break;
             }
         }
         if(count>=3){
            cout<<2<<endl;
         }
         else{
            cout<<ans<<endl;
         }
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    string s,ans="";
    cin>>s;
    for(int i=0;i<N;i++){
       if(s[i]!='.'){
        ans+=s[i];
       }
    }
    if(ans.empty()){
        cout<<"Null"<<endl;
    }
    else{
    cout<<ans<<endl;
    }
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    bool ok=false;
    for(int i=0;i<4;i++){
        if(s[0]==s[2]&&s[1]==s[3]){
            ok=true;
        }
        
        
    }
    if(ok){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
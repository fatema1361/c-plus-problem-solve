#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s.size()>=3&&s[0]=='1'&&s[1]=='0'&&s[2]!='0'){
           int x=stoi(s.substr(2));
           if(x>=2){
            cout<<"YES"<<endl;
           }
           else{
            cout<<"NO"<<endl;
           }
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
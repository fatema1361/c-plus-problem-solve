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
        bool f=false;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                char c;
                if(s[i]!='a'){
                    c='a';
                }
                else{
                    c='b';
                }
                s.insert(s.begin()+i+1,c);
                f=true;
                break;
            }
        }
        if(!f){
            if(s.back()=='a'){
                s+='b';
    
            }
            else{
                s+='a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
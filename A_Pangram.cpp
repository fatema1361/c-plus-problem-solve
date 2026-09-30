#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    string s;
    cin>>s;
    // if(n<=26){
    //    cout<<"NO"<<endl;
    // }
    bool present[26]={false};
    
    for(char ch:s){
        
        if(ch>='A'&&ch<='Z'){
            present[ch-'A']=true;
        }
        if(ch>='a'&&ch<='z'){
            present[ch-'a']=true;
        }
        

    }
    bool all=true;
    for(int i=0;i<26;i++){
        if(!present[i]){
            all=false;
        }
    }
    if(all){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
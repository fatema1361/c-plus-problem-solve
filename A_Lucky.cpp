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
        int l1=0,f1=0;
        for(int i=0;i<3;i++){
            l1+=s[i];
        }
        for(int i=s.size()-1;i>2;i--){
            f1+=s[i];
        }
        if(l1==f1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
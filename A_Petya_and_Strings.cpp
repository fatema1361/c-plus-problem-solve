#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int len=s1.length();
    for(int i=0;i<len;i++){
        char a=tolower(s1[i]);
        char b=tolower(s2[i]);

        if(a<b){
            cout<<-1<<endl;
            return 0;
        }
        else if(a>b){
            cout<<1<<endl;
            return 0;
        }
        
    }
    cout<<0<<endl;
        
    return 0;
}
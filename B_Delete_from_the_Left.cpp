#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int common=0;
    int i=s.size()-1;
    int j=t.size()-1;
    while(i>=0&&j>=0 &&s[i]==t[j]){
        common++;
        i--;
        j--;
    }
    int ans=s.size()+t.size()-2*common;
    
    cout<<ans<<endl<<endl;
    
    
    return 0;
}

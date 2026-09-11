#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int f=-1,l=-1;
        f=s.find('B');
        l=s.rfind('B');
        cout<<l-f<<endl;
    }
    
    return 0;   
}
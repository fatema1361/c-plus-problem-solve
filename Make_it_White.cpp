#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,f=-1,l=-1;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
           if(s[i]=='B'){
            if(f==-1)f=i;
            l=i;
           }
        }
        cout<<l-f+1<<endl;
    }
    return 0;
}

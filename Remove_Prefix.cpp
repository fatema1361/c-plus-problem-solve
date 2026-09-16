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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool u[n+1]={};
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(u[a[i]]){
                ans=i+1;
                break;
            }
            u[a[i]]=true;
        }
        //int newSize=unique(a,a+n)-a;
        cout<<ans<<endl;
    }
    return 0;
}
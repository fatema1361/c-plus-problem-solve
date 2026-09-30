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
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        int ans=min(a1,min(a2,a3));
        cout<<n-ans<<endl;
        
    }
    return 0;
}
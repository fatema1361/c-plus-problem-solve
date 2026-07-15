#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,mn=INT16_MAX,mx=INT16_MIN;
        cin>>n;
        int h;
        for(int i=0;i<n;i++){
            cin>>h;
            mn=min(mn,h);
            mx=max(mx,h);
        }
        cout<<mx-mn+1<<endl;
    }
    return 0;
}
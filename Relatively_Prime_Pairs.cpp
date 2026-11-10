#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll l,r;
    if((r-l+1)%2!=0){
        cout<<"NO"<<endl;
        return 0;
    }
    cin>>l>>r;
    cout<<"YES"<<endl;
    for(ll i=l;i<=r;i+=2){
        cout<<i<<" "<<i+l<<endl;
    }
    return 0;
}
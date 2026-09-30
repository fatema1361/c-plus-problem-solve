#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b;
    cin>>a>>b;
    int ans=min(a,b);
    int r=abs(a-b)/2;
    cout<<ans<<" "<<r<<endl;


    return 0;
}
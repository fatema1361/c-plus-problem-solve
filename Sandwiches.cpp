#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int B,H,C;
    cin>>B>>H>>C;
    int cnt=0;
    int a=B/2;
   
    int ans=min(a,H+C);
    cout<<ans<<endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;//r*r=x-x1+y-y1
    while(t--){
        int x,y,R;
        cin>>x>>y>>R;
        int x1,y1,ans=0;
        ans=pow((R-x),2)+pow((R-y),2);
        cout<<sqrt(ans)<<endl;

    }
    return 0
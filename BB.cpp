#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        int ans=0;
        if(X>=Y){
            ans=X/Y;

        }
        cout<<ans<<endl;
    }
    return 0;
}
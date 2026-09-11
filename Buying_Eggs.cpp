#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,Y,F;
    cin>>X>>Y>>F;
    int r=X*12;
    int a=Y*12+F;
    int ans=min(r,a);
    cout<<ans<<endl;
    return 0;
}
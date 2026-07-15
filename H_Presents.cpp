#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int p[n],ans[n];
    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    for(int i=1;i<=n;i++){
       ans[p[i]]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}
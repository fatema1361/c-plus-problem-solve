#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int a[n],b[m],suma=0,sumb=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        suma=suma+a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
        sumb=sumb+b[i];
    }
    if(suma==sumb){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return 0;
}
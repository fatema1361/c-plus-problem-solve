#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<long long>a(n),x(m+n);
    vector<long long>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    set<int>at;
    for(int i=0;i<n;i++){
        x[i]=a[i];
    }
    for(int i=0;i<m;i++){
        x[n+i]=b[i];
    }

    
    sort(x.begin(),x.end());
    //x.erase(unique(x.begin(),x.end()),x.end());
    for(int i=0;i<x.size();i++){
        cout<<x[i]<<" ";
       
    }
    return 0;
}
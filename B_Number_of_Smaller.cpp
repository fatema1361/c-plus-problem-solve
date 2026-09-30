#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    
     int j=0;
     for(int i=0;i<m;i++){
        while(j<n&&a[j]<b[i]){
            j++;
        }
        cout<<j<<" ";
     }
    
    return 0;
}
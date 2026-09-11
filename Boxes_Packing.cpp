#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int freq=1,mx=1;
    for(int i=1;i<n;i++){
       if(a[i]==a[i-1]){
        freq++;
       }
       else{
        freq=1;
       }
       mx=max(mx,freq);
    }
     
     cout<<mx<<endl;
    return 0;
}
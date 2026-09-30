#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k,cnt=0,an;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    an=a[k-1];
    for(int i=0;i<n;i++){
        if(an<=a[i]&&a[i]>0){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
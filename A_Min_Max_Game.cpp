#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,cnt0=0,cnt1=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                cnt1++;
            }
            if(a[i]==0){
                cnt0++;
            }
        }
        if(cnt1>=cnt0){
            cout<<"Bessie"<<endl;
        }
        else{
            cout<<"Elsie"<<endl;
        }

    }
    
    return 0;
}
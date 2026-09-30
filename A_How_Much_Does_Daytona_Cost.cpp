#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,found=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==k){
                found=1;
            }
            
        }
        if(found){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    }
    return 0;
}
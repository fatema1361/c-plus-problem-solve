#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0&&a[i]%3==0){
                cout<<a[i]<<" ";
            }
            else {
                cout<<a[i]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
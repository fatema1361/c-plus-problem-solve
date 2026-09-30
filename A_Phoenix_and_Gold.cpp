#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum=0;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==x){
            cout<<"NO"<<endl;
            continue;
        }
        sort(a.rbegin(),a.rend());
        int curr=0;
        for(int i=0;i<n;i++){
            curr+=a[i];
            if(curr==x){
            swap(a[i],a[i+1]);
            break;
           }
        }
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    cout<<endl;
    return 0;
}
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
        vector<int>a(n);
        vector<long long>pre(n+1,0);
        for(int i=0;i<n;i++){
            cin>>a[i];
            pre[i+1]=pre[i]+a[i];
        }
        string s;
        cin>>s;
        int l=0,r=n-1;
        long long sum=0;
        while(l<r){
            while(l<r&&s[l]!='L'){
                l++;
            }
            while(l<r&&s[r]!='R'){
                r--;
            }
            if(l<r){
                sum+=pre[r+1]-pre[l];
                l++;
                r--;
            }
        }
        cout<<sum<<endl;


    }
    return 0;
}
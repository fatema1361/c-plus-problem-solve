#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int total=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            total+=a[i];
        }
        if(total<s){
            cout<<-1<<endl;
            continue;
        }
        int k=total-s;
        int l=0,sum=0,ans=0;
        for(int r=0;r<n;r++){
            sum+=a[r];
            while(sum>s){
                sum-=a[l];
                l++;
            }
            if(sum==s)
               ans=max(ans,r-l+1);
        }
        if(ans==0)
          cout<<-1<<endl;
        else
          cout<<n-ans<<endl;
    }
    return 0;
}
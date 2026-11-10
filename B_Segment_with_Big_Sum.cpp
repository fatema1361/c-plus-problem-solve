#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s;
    cin>>n>>s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0;
    long long sum=0;
    int ans=n+1;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>=s){
            ans=min(ans,r-l+1);
            sum-=a[l];
            l++;
        }
    }
    if(ans==n+1){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}

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
    int i=0,j=0;
    long long ans=0;
    while(i<n&&j<m){
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            int x=a[i];
            long long cntA=0;
            long long cntB=0;
            while(i<n&&a[i]==x){
                cntA++;
                i++;
            }
            while(j<m&&b[j]==x){
                cntB++;
                j++;
            }
            ans+=cntA*cntB;
        }
    }
    cout<<ans<<endl;
    return 0;
}
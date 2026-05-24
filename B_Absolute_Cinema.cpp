#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         long long int sum=0,mx=0;
         cin>>n;
         int a[n],b[n];
         for(int i=0;i<n;i++){
            cin>>a[i];
            
         }
         for(int i=0;i<n;i++){
            cin>>b[i];
            
         }
         for(int i=0;i<n;i++){
            long long int small=min(a[i],b[i]);
            long long int big=max(a[i],b[i]);
            sum+=big;
            mx=max(mx,small);
         }
         
        cout<<sum+mx<<endl; 
        
    }
    return 0;
}
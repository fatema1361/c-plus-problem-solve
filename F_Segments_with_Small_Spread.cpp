#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long s;
    cin>>n>>s;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int l=0,r=0;
    long long ans=0;
    multiset<long long>ml;
    
    while(r<n){
        ml.insert(a[r]);
        long long mn=*ml.begin(),mx=*ml.rbegin();
        if(mx-mn<=s){
            ans+=(r-l+1);

        }
        else{
            while(l<=r){
                mn=*ml.begin();
                mx=*ml.rbegin();
                if(mx-mn<=s){
                   break; 
                }
                ml.erase(ml.find(a[l]));
                l++;
            }
            if(mx-mn<=s){
                ans+=(r-l+1);
            }
            
        }
        r++;
    }
    cout<<ans<<endl;

    
    return 0;
}
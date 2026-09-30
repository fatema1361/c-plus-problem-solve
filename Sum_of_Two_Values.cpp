#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin>>n>>x;
    vector<pair<long long,int>>a(n);

    for(int i=0;i<n;i++){
        cin>>a[i].first;
        a[i].second=i+1;
    }    

    long long sum;
    sort(a.begin(),a.end());
    
        int l=0;
        int r=n-1;
        while(l<r){
            sum=a[l].first+a[r].first;
            if(sum==x){
                
                cout<<a[l].second<<" "<<a[r].second<<endl;
                return 0;
            }
            else if(sum<x){
                l++;

            }
            else{
                r--;
            }

        }
        cout<<"IMPOSSIBLE"<<endl;

    
    

    // vector<int>a(n);
    // for(int i=0;i<n;i++){
    //     cin>>a[i];
    // }
    
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
            
    //             if(a[i]+a[j]==x){
    //                 cout<<i+1<<" "<<j+1<<endl;
    //                 return 0;
    //             }

            
    //     }
    // }

    return 0;
}
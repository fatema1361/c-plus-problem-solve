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
    for(int i=0;i<n;i++){
        int l=i+1;
        int r=n-1;
        while(l<r){
            sum=a[i].first+a[l].first+a[r].first;
            if(sum==x){
                // vector<int>ans={
                //     a[i].second,
                //     a[l].second,
                //     a[r].second
                // };
                // sort(ans.begin(),ans.end());
                cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second<<endl;
                return 0;
            }
            else if(sum<x){
                l++;

            }
            else{
                r--;
            }

        }
    }
    
    cout<<"IMPOSSIBLE"<<endl;



    
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         for(int k=j+1;k<n;k++){
    //             if(a[i]+a[j]+a[k]==x){
    //                 cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
    //                 return 0;
    //             }

    //         }
    //     }
    // }
    return 0;
}
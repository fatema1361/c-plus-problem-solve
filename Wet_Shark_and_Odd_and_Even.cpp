#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,mn=INT_MAX;
    cin>>n;
    int a[n];
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n;i++){
        sum+=a[i];
        if(a[i]%2!=0){
            mn=min(mn,a[i]);
        }
    }
    if(sum%2==0){
        cout<<sum<<endl;
    }
    else{
        cout<<sum-mn<<endl;
    }


    return 0;
}
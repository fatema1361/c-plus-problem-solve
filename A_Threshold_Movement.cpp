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
        int evenSum=INT_MIN,oddSum=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if((i+1)%2==0){
                evenSum=max(evenSum,a[i]);
            }
            else{
                oddSum=min(oddSum,a[i]);
            }
        }
        if(n==1){
            cout<<"NO"<<endl;
        }
        else if(evenSum+1<oddSum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
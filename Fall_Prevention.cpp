#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,mn=0;
        long long sum=0;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum+=A[i];
            if(A[i]<A[mn]){
                mn=i;
            }
           // int mn=*min(A.begin(),A.end());
            if(sum<0){
            sum=sum-A[mn];
        }
              
        }
        if(sum>=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        

        
    }
    return 0;
}
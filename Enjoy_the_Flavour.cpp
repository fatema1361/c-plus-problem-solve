#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
    cin>>N;
    vector<long long>A(N);
    long long sum=0;
    for(int i=0;i<N;i++){
        cin>>A[i];
        sum+=A[i];
    }
    long long left=0,right,ans=LLONG_MAX;

    for(int i=0;i<N-1;i++){
        left+=A[i];
    }
    right=sum-left;
    long long imblance=abs(left-right);
    //ans=min(ans,imblance);
    cout<<imblance<<endl; 
    }
    
    return 0;
}
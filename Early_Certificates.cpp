#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M;
        cin>>N>>M;
        string A,B,ans="";
        cin>>A;
        cin>>B;
        int n=min(A.size(),B.size());
        for(int i=0;i<n;i++){
            if(A[i]==B[i]){
                ans+=A[i];
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
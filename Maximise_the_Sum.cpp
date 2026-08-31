#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,sum=0;
    cin>>T;
    while(T--){
        int A[5];
        for(int i=0;i<5;i++){
            cin>>A[i];
            
        }
        sort(A,A+5,greater<int>());
        int ans=A[0];
        for(int i=1;i<5;i++){
            ans=ans-A[i];
        }
         
        cout<<ans<<endl;
    }
    return 0;
}
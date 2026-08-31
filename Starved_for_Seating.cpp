#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K,total=0,ans=0,fans;
        cin>>N>>K;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            total+=A[i];
        }
         for(int i=0;i<N;i++){
            for(int j=i+1;j<N;j++){
                fans=total/2+A[i]/2+A[j]/2;
                
                    if(fans>K){
                        ans++;
                    }
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}
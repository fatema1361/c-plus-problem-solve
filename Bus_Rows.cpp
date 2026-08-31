#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,M,X,rw=0,count=0;
        cin>>N>>M;
        cin>>X;
        // ans=(N*M-X)/M;
        // cout<<ans<<endl;
        for(int i=1;i<=N;i++){
            for(int j=1;j<=M;j++){
                count++;
                if(count==X){
                    rw=i;
                    break;
                }
            }
                if(rw!=0){
                    break;
                }   
            
        }
            int f=rw;
            int b=N-rw+1;

        cout<<min(f,b)<<endl;

    }
    return 0;
}
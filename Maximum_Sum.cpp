#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K;
        cin>>N>>K;
        int A[N];
        
        for(int i=0;i<N;i++){
            cin>>A[i]; 
           
         }
         int l=0,maxsum=0;
        int rm=N-K;
        int r=rm-1;
        while(r<N){
            int sum=0;
            for(int i=l;i<=r;i++){
                sum+=A[i];
            }
            if(sum>maxsum){
                maxsum=sum;
            }
            l++;
            r++;
        }
        cout<<maxsum<<endl;
    
    }
        
        
    
    return 0;
}
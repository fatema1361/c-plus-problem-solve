#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,N,sum=0,first,second;
    cin>>T;
    while(T--){
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
             
        }
        sort(A,A+N,greater<int>());
        
             first=A[0];
             for(int i=0;i<N;i++){
                if(A[i]!=first){
                  second=A[i];
                  break;
                }
             }
            
        sum=first+second;
        cout<<sum<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,count=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            
            if(A[i]!=A[i-1]){
              count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
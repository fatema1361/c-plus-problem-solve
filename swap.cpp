#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int A[N],i=0,j=N-1;
    
    for(int i=0;i<N;i++){
        cin>>A[i];
      
    }
    swap(A[i],A[j]);
    for(int k=0;k<N;k++){
        cout<<A[k]<<" ";
    }
    
    return 0;
}
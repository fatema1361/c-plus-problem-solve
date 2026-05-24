#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    
    while(T--){
       int N,mx;
       cin>>N;
       int A[N];
       for(int i=0;i<N;i++){
        cin>>A[i];
        
       }
       mx=*max_element(A,A+N);
       cout<<mx<<endl;
    }
    return 0;
}
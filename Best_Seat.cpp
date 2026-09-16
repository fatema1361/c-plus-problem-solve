#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,sum=0;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        //sum=(1+N)/2;
        
    }
    
    //cout<<sum<<endl;
    //int ans1=*min_element(A,A+N);
    //int ans2=*max_element(A,A+N);
    //sum=(ans1+ans2)/2;
    for(int i=0;i<N;i++){
       if(N%2==1){
        cout<<A[N/2]<<endl;
        return 0;
       }
       else{
          cout<<A[N/2-1]<<endl;
          return 0;
       }

    }
    return 0;
}
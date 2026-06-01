#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,j=0;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        if(A[i]!=0){
            A[j]=A[i];
            j++;

        }
    }
    while(j<N){
        A[j]=0;
        j++;
    }
    for(int i=0;i<N;i++){
       cout<<A[i]<<" ";
    }
    cout<<endl;

    return 0;
}
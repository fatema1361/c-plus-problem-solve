#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
           cin>>A[i];
        }
        sort(A,A+N);
        int min=A[0],sum=0;
        for(int i=1;i<N;i++){
            sum=sum+A[i];
        }
        cout<<sum<<endl;

    }

    return 0;
}
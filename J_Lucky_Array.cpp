#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,min,count=1;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    min=A[0];
    for(int i=1;i<N;i++){
        if(min==A[i]){
            count++;
        }
    }
    if(count%2!=0){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}
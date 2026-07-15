#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int A[n],mex=0;
    for(int i=0;i<n;i++){
        cin>>A[i];

        if(A[i]==mex){
            mex++;
        }
    }
    cout<<mex<<endl;
    return 0;
}
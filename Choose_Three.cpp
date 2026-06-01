#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
    int N,S;
    cin>>N>>S;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    sort(A,A+N);
    int found=0;
    for(int i=0;i<N-2;i++){
        int l=i+1;
        int r=N-1;
        while(l<r){
            int sum=A[i]+A[l]+A[r];
            if(sum==S){
                found=1;
                break;
            }
            else if(sum<S){
                l++;
            }
            else{
                r--;
            }
        }
        if(found==1){
            break;
        }
    }
    if(found==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }    
    return 0;
}
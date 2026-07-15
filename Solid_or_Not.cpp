#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,isprime=1;
        cin>>N;
        if(N<2){
            isprime=0;
        }
        else{
        for(int i=2;i*i<=N;i++){
            if(N%i==0){
                isprime=0;
                break;
            }
         }
       }
    
        if(isprime){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
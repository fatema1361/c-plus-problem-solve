#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    
    while(T--){
       int N,prime=1;
       cin>>N;
       if(N<=1){
        prime=0;
       }
       for(int i=2;i*i<=N;i++){
        if(N%i==0){
            prime=0;
             break;
        }
       }
       if(prime){
        cout<<"prime"<<endl;
       }
       else{
        cout<<"not prime"<<endl;
       }
    }
    return 0;
}

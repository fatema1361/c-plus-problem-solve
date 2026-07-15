#include<bits/stdc++.h>
using namespace std;
int isprime(int n){
    
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
           return 0;
            break;
        }
    }    return 1;
}
int main(){
    int n,m;
    cin>>n>>m;
    int p=n+1;
    while(!isprime(p)){
        p++;
    }
        

    if(p==m){
        
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
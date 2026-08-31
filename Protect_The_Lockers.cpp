#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int gcd(int l,int r){
    
    while(r!=0){
        int temp=r;
        r=l%r;
        l=temp;
    }
    return l;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int L,R,K;
        cin>>L>>R>>K;
        int count=0;
       
            if(gcd(x,K)==1){
              count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
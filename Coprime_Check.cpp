#include<bits/stdc++.h>
using namespace std;
int coPrime(int a,int b){
    while(b!=0){
        int temp=a%b;
        a=b;
        b=temp;
      }
      return a;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int A,B,a=0,b=0;
        cin>>A>>B;
      a=A,b=B;
      int ans=coPrime(a,b);
        if(ans==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
      
    return 0;
}
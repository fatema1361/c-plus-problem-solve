#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
         int N,flag=1;
         cin>>N;
         int A[N],s[N];
         for(int i=0;i<N;i++){
             cin>>A[i];
             s[i]=A[i];
        }

        sort(s,s+N);
        for(int i=0;i<N;i++){
            if(s[i]!=A[i]){
               flag=0;
               break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    
    return 0;
}
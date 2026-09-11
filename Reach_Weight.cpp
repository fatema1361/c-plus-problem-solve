#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int s=N/2;
        int ans=s*30;
        if(N==1){
            cout<<20<<endl;
            
        }
        else if(N%2==0){
            cout<<30*(N/2)<<endl;
        }
        else{
           cout<<ans+20<<endl;
        }
        
        
    }
    return 0;
}
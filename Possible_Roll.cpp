#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int X,K,Y;
    cin>>X>>K>>Y;
    bool ok=false;
    for(int i=1;i<=X;i++){
        if(i*K==Y){
            ok=true;
            
            
        }
       
    }
    if(ok){
        cout<<"YES"<<endl;
    }
     else{
            cout<<"NO"<<endl;
           
        }
    return 0;
}
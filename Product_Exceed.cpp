#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,P,cnt=0;
        cin>>X>>Y>>P;
        while(X*Y<P){
            if((X+1)*Y>=X*(Y+1)){
                X++;
            }
            else{
                Y++;
            }
            cnt++;
       
            
        }
        cout<<cnt<<endl;

    }
    return 0;
}
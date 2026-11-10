#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int N,K;
        cin>>N>>K;
        if(K==0){
            if(N%4==0){
                cout<<"Off"<<endl;

            }
            else{
                cout<<"On"<<endl;

            }
            
        }
        else{
            if(N%4==0){
                cout<<"On"<<endl;
            }
            else{
                cout<<"Ambiguous"<<endl;
            }           
        }
        

    }
    return 0;
}
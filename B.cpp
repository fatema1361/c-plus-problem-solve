#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        if(N==1||N==3){
            cout<<1<<endl;
        }
        else if(N%2==0){
            cout<<N/2+1<<endl;
        }
        else{
            cout<<(N-1)/2<<endl;
        }
        
    }    
    return 0;
}
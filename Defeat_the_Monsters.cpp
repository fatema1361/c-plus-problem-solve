#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int A,B,C,r,ans=0;
        cin>>A>>B>>C;
        
        if(C%3==0&&B==2*A+C/3){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
    return 0;
}
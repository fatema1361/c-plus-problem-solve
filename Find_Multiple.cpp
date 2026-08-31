#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,ans=-1;
    cin>>A>>B>>C;
    for(int i=A;i<=B;i++){
        if(i%C==0){
            ans=i;
            break;
        }
        
    }
    cout<<ans<<endl;
    return 0;
}
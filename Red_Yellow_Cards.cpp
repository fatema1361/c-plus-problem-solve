#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int R,Y;
        cin>>R>>Y;
        int ans=R;
        if(Y>R){
           ans+=(Y-R)/2;
        }
        cout<<ans<<endl;

    }
    return 0;
}
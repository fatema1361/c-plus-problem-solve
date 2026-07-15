#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,ans=0;
        cin>>X>>Y;
        for(int i=X;i>Y;i--){
            ans+=(i+9)/10;

        }
        cout<<ans<<endl;
    }

    return 0;
}
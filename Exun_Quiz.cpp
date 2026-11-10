#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,S;
        cin>>N>>S;
        int ans=-1;
        for(int c=0;c<=N;c++){
            int w=4*c-S;

            if(w>=0&&c+w<=N){
                ans=w+c;
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
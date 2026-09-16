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
        if(N==1){
            cout<<200<<endl;

        }
        else{
            cout<<N*100<<endl;
        }
    }
    return 0;
}
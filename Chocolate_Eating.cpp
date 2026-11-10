#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int A,B;
        cin>>A>>B;
        if(A==B){
            cout<<A+B-1<<endl;
        }
        else if(A!=B){
            cout<<A+B<<endl;
        }
    }
    return 0;
}
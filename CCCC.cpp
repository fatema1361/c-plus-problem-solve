#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long B,C;
        cin>>B>>C;
        cout<<C/gcd(B,C)<<endl;
    }
    return 0;
}
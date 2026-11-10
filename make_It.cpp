#include<bits/stdc++.h>
using namespace std;
bool canReach(int n){
    if(n==1){
        return true;
    }
    if(n<1){
        return false;
    }
    if(n%2==0){
        return canReach(n/2);

    }
    return canReach(n-3);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(canReach(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    
    return 0;   
}
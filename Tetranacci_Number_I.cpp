#include<bits/stdc++.h>
using namespace std;
int tetranacci(int n){
    if(n==0||n==1){
        return n;
    }
    if(n==2){
        return 1;
    }
    if(n==3){
        return 2;
    }
    return tetranacci(n-1)+tetranacci(n-2)+tetranacci(n-3)+tetranacci(n-4);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    cout<<tetranacci(n)<<endl;
    
    return 0;
}
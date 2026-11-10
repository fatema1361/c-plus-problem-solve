#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n==0){
        cout<<0<<endl;
        return 0;
    }
    if(n==1||n==2){
        cout<<1<<endl;
        return 0;
    }
    if(n==3){
        cout<<2<<endl;
        return 0;
    }
    long long a=0;
    long long b=1;
    long long c=1;
    long long d=2;
    for(int i=4;i<=n;i++){
        long long e=a+b+c+d;
        a=b;
        b=c;
        c=d;
        d=e;
    }
    cout<<d<<endl;
    

    return 0;
}
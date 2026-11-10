#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N;
    cin>>N;
    if(N<5){
        cout<<N<<endl;
    }
    else{
        int a=N/5;
        cout<<a+(N%5)<<endl;
    }
    return 0;
}
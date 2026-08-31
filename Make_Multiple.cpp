#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,count=0;
        cin>>N;
        N=N*5;
        if(N/=3){
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
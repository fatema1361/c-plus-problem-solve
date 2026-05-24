#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,K,count=0;
        cin>>N>>K;
        int H[N];
        for(int i=0;i<N;i++){
            cin>>H[i];
            if(K<H[i]){
             count++;
            }
        }
      cout<<count<<endl;
    }
    return 0;
}

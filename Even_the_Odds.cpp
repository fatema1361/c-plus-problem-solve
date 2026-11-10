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
       vector<int>a(N);
       int cnt=0;
       for(int i=0;i<N;i++){
        cin<<a[i];
       }
       int maxE=0,maxO=0;
       for(int i=0;i<N;i++){
        if(a[i]%2!=0){
            cnt++;
            if()
        }
        else{
            oddC++;
        }
        //maxE=max(maxE,evenC);
        //maxO=max(maxO,oddC);
       }
       cout<<max(evenC,oddC);
    }
    return 0;
}
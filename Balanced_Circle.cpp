#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        vector<int>A(N);
        for(int i=0;i<N;i++){
           cin>>A[i];
        }
        int mn=*min_element(A.begin(),A.end());
        int cnt=0;
        for(int i=0;i<N;i++){
           if(A[i]==mn){
            cnt++;
           }
        }
        if(cnt>=2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
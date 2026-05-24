#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int X[N];
    int mx=INT_MIN;
    for(int i=0;i<N;i++){
        cin>>X[i];
        
        mx=max(X[i],mx);

    }
    cout<<mx<<endl;
    return 0;
}
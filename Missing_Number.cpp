#include<bits/stdc++.h>
using namespace std;
int main(){
    int S,sum=0;
    cin>>S;
    for(int i=1;i<=4;i++){
        sum+=i;

    }
    cout<<sum-S<<endl;
    return 0;
}
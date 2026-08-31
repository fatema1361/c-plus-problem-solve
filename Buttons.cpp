#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,ans=0;
    cin>>A>>B;
    ans=max({A+A-1,B+B-1,A+B});
    cout<<ans<<endl;
    return 0;
}
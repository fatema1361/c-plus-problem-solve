#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C;
    cin>>A>>B>>C;
    int mn=min(A,min(B,C));
    int mx=max(A,max(B,C));
    cout<<mn<<" "<<mx<<endl;
    return 0;
}
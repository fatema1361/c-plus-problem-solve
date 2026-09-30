#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n;
    cin>>n>>k;
    for(int i=0;i<k;i++){
        int digit=n%10;
        if(digit==0){
            n=n/10;

        }
        else{
            n=n-1;

        }
    }
    cout<<n<<endl;
    return 0;
}
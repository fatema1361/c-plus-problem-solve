#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a,b,cnt=0;
        cin>>a>>b;
        if(a<=b){
          cout<<-1<<endl;
          
        }
        else{
            cout<<min(b,a-b)<<endl;


        }
    }
    return 0;
}
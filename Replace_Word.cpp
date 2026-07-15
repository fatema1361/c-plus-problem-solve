#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string S,X;
        cin>>S>>X;
        while(S.find(X)!=string::npos){
             int pos=S.find(X);
             S.replace(pos,X.size(),"#");
        }
        cout<<S<<endl;
    }
    

    return 0;
}
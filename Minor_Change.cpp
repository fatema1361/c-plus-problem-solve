#include<bits/stdc++.h>
using namespace std;
int main(){
    string S,T;
    cin>>S;
    cin>>T;
    int count=0;
    int lenS=S.length();
    int lenT=T.length();
    for(int i=0;i<lenS;i++){
       if(S[i]!=T[i]){
        S[i]=T[i];
        count++;
       } 
    }
    cout<<count<<endl;

    return 0;
}
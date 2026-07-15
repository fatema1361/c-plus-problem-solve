#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    cin.ignore();
    string S;
    while(T--){
        getline(cin,S);
        for(int i=0;i<S.size();i++){
            if(i==0 ||S[i-1]==' '){
                if(S[i]>='a'&&S[i]<='z'){
                    S[i]=S[i]-32;
                }
            }
        }
        cout<<S<<endl;
    }
    return 0;
}
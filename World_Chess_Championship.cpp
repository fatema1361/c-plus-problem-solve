#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X;
        cin>>X;
        string S;
        cin>>S;
        int countC=0,countD=0,countN=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='C'){
                countC++;
            }
            else if(S[i]=='D'){
                countD++;
            }
            else if(S[i]=='N'){
                countN++;
            }


        }
        int carlsen =2*countC+countD;
        int chef=2*countN+countD;
        if(carlsen>chef){
            cout<<60*X<<endl;
        }
        else if(carlsen==chef){
            cout<<55*X<<endl;
        }
        else{
            cout<<40*X<<endl;
        }

    }
    cout<<endl;
    return 0;
}
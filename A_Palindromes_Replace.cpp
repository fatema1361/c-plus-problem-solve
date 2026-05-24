#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    int len=S.size();
    int i=0,flag=0;
    for(i=0;i<len/2;i++){
       int j=len-1-i;
        if(S[i]=='?' && S[j]=='?'){
          S[i]=S[j]='a';
        }
        else if(S[i]=='?'){

             S[i]=S[j];
             
        }
       
        else if(S[j]=='?'){
            S[j]=S[i];
        }
        else if(S[i]!=S[j]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<-1<<endl;
        return 0;
    }
    if(len%2==1&&S[len/2]=='?'){
        S[len/2]='a';
    }
    cout<<S<<endl;
    
    return 0;
}
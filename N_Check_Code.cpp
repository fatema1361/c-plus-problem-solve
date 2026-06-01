#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,flag=1;
    cin>>A>>B;
    string S;
    cin>>S;
   
        if(S[A]!='-'){
            flag=0;
    
        }
        for(int i=0;i<S.size();i++){
            if(i==A){
                continue;
            }
            if(!isdigit(S[i])){
                flag=0;

            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    
    return 0;
}
    
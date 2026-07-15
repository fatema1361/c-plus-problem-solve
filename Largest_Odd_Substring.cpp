#include<bits/stdc++.h>
using namespace std;
int main(){
    string num,ans="";
    cin>>num;
    int pos=-1;
    for(int i=num.size()-1;i>=0;i--){
        int digit=num[i]-'0';
        if(digit%2!=0){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        cout<<-1;
    }
    else{
        for(int i=0;i<=pos;i++){
            cout<<num[i];
        }
    }
    return 0;
}
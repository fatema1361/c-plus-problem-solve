#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    int odd=0,even=0;
    int pos=1;
    for(int i=S.size()-1;i>=0;i--){
        int digit =S[i]-'0';
        if(pos%2==1){
            odd+=digit;
        }
        else{
            even+=digit;
        }
        pos++;
    }
    int dif=abs(odd-even);
    if(dif%11==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}
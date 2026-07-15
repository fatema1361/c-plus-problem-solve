#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    if(S.front()=='c' || S.back()=='f'){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
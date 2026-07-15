#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    getline(cin,S);
    int found=0;
    stringstream ss(S);
    while(ss>>S){
        if(S=="Jessica"){
            found=1;
            break;
        }
    }
    if(found){
       cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    cout<<endl;
    return 0;
}
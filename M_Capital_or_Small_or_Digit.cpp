#include<bits/stdc++.h>
using namespace std;
int main(){
    char X;
    cin>>X;
    if(X>='A'&&X<='Z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if(X>='a'&&X<='z'){
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    else if(X>='0'&&X<='9'){
        cout<<"IS DIGIT"<<endl;
    }
    return 0;
}
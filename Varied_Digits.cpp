#include<bits/stdc++.h>
using namespace std;
int main(){
    int X;
    cin>>X;
    int last,first;
    last=X%10;
    first=X/10;
    if(first!=last){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}
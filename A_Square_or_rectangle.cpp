#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int w,h;
    while(t--){
        cin>>w>>h;
        if(w==h){
            cout<<"Square"<<endl;
        }
        else{
            cout<<"Rectangle"<<endl;
        }
    }
    return 0;
}
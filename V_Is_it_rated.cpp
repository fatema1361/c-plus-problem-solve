#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,r=0,ur=0;
    cin>>n;
    int p=-1;
    while(n--){
        int a,b;
        cin>>a>>b;
        
        if(a!=b){
            r=1;
        }
      if(p!=-1&&p<a){
       
        ur=1;
        
      }
      p=a;
      
    }
    if(r){
    cout<<"rated"<<endl;
    }
    else if(ur){
      cout<<"unrated"<<endl;
    }
    else {
      cout<<"maybe"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,flag=0;
        cin>>N;
        int X[N],temp[N];
        for(int i=0;i<N;i++){
            cin>>X[i];
            temp[i]=X[i];
        }
        
        sort(temp,temp+N);
        for(int i=0;i<N;i++){
            if(temp[i]==X[i]){
                flag=1;
            }
        }
        if(flag==1){
            cout<<"YES"<<endl;  
      }
      else{
        cout<<"NO"<<endl;
     }
    }
    
    return 0;
}
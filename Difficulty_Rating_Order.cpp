#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int X[N],temp[N];
        for(int i=0;i<N;i++){
            cin>>X[i];
            temp[i]=X[i];
        }
        
        sort(temp,temp+N);
        int flag=1;
        for(int i=0;i<N;i++){
            if(temp[i]!=X[i]){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<"Yes"<<endl;  
      }
      else{
        cout<<"No"<<endl;
     }
    }
    
    return 0;
}
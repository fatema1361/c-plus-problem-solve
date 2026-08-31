#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,ok=0;
    cin>>N;
    int V[N],P[N];
    for(int i=0;i<N;i++){
        cin>>V[i];
    }
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    sort(V,V+N);
    sort(P,P+N);
    for(int i=0;i<N;i++){
        if(V[i]<=P[i]){
            cout<<"No"<<endl;
          return 0;  
        }
    }
    
        cout<<"Yes"<<endl;
    
    return 0;
}
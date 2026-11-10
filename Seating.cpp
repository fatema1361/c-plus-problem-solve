#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,M,K;
        cin>>N>>M>>K;
        int A;
        bool taken[105]={};
        for(int i=0;i<M;i++){
            cin>>A;
            taken[A]=true;
        }
        
 
        for(int i=0;i<K;i++){
            for(int j=1;j<=N;j++){
               if(!taken[j]){
                cout<<j<<" ";
                taken[j]=true;
                break;

               } 

            }



        }
        cout<<endl;
    }
    return 0;
}
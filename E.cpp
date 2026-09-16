#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin>>T;
    while(T--){
        int N,cnt=0;
        cin>>N;
        int A[N],sum=0;
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        //int a=*min_element(A,A+N);
        for(int i=0;i<N;i++){
            if(A[i]%2!=0){
              cnt++;
            }
        }    
        // }
        // if(a%2==1){
        //     cout<<"Yes"<<endl;
        // }
        // else{
        //     cout<<"No"<<endl;
        // }
        if(cnt==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
            
            
        
        }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    int N;
    while(T--){
        int sum=0,flag=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum+=A[i];
        }
        for(int i=0;i<N;i++){
            int ans=sum-A[i];
            if(ans%2==0){
                flag=1;
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
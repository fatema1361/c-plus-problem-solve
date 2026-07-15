#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int mid=(N+1)/2;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j && i+j==N-1){
            cout<<"X";
            }
            else if(i==j){
            cout<<"\\";
           } 
           
           else if(i+j==N-1){
            cout<<"/";
           }
           else{
            cout<<" ";
           }

        }
        cout<<endl;
    }
    return 0;
}
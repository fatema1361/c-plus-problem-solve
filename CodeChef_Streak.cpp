#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,count1=0,a1=0,b1=0,count2=0;
        cin>>N;
        int A[N],B[N];
        for(int i=0;i<N;i++){
           cin>>A[i];
        }
        for(int i=0;i<N;i++){
           cin>>B[i];
        }
       for(int i=0;i<N;i++){
        if(A[i]!=0){
           count1++;
        }
        else{
            count1=0;
        }
        a1=max(a1,count1);

       } 
       for(int i=0;i<N;i++){
        if(B[i]!=0){
           count2++;
        }
        else{
            count2=0;
        }
        b1=max(b1,count2);

       } 
       if(a1>b1){
        cout<<"Om"<<endl;
       }
       else if(a1<b1){
        cout<<"Addy"<<endl;
       }
       else{
        cout<<"Draw"<<endl;
       }
    }
    return 0;
}
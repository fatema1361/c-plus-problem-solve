#include<bits/stdc++.h>
using namespace std;
int main(){
    int N,j;
    cin>>N;
    j=N;
    int k=1;
    for(int i=1;i<=N;i++){
        
        if(i%2==0){
           cout<<j<<" ";
           j--;
        }
        else{
          cout<<k<<" ";
          k++;
        }
    }
    cout<<endl;
    return 0;
}
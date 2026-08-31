#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N,sum=0,odd=0;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];
            sum=sum+A[i];
            if(A[i]%2!=0){
                odd++;
            }
            
        }
        
        if(sum%2==0){
            cout<<sum-odd/2<<endl;
        }
        else{
            cout<<(odd-1)/2<<endl;
            
            
        }
    }
    return 0;
}
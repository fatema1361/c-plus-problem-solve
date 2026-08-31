#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        bool equal=true;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            

        }
        for(int i=1;i<n;i++){
            
            if(a[i]!=a[0]){
               equal=false;
               break;
            }

        }
        if(equal){
            sum=a[0]+a[1];
    
        }
        else{
            for(int i=0;i<n;i++){
                sum=sum+a[i];
            }
        }
        cout<<sum<<endl;


        

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
           int arr;
           string s;
           cin>>arr>>s;
            int final=a[i];
              for(int j=0;j<arr;j++){
                if(s[j]=='U'){
                    final--;
                    if(final<0){
                        final=9;
                    }
                }
                else if(s[j]=='D'){
                    final++;
                    if(final>9){
                        final=0;
                    }
                }
              }
           
           cout<<final<<" ";

        }
        cout<<endl;
  
    }
    return 0;
}
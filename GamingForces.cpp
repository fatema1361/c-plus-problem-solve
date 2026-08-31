#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h,count=0;
        for(int i=0;i<n;i++){
            cin>>h;
            if(h==1){
                count++;
            }

        }
        cout<<n-count/2<<endl;
    }
    return 0;
}
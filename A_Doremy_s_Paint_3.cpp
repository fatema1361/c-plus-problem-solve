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
        sort(a,a+n);
        int cnt1=0;
        int cnt2=0;
        for(int i=0;i<n;i++){
            if(a[i]==a[0]){
                cnt1++;
            }
            else{
                break;
            }
        }
        for(int i=cnt1;i<n;i++){
            if(a[i]==a[cnt1]){
                cnt2++;
            }
            else{
                cnt2=-1;
                break;
            }
        }
        if(cnt2==-1){
            cout<<"No"<<endl;
        }
        else if(cnt2==0){
            cout<<"Yes"<<endl;
        }
        else if(abs(cnt1-cnt2)<=1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }               
    return 0;
}
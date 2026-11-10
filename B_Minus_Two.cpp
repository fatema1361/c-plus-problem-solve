#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,odd=0,zero=0,two=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==1){
                odd++;

            }
            else if(a[i]%4==0){
                zero++;

            }
            else{
                two++;
            }
        }
        cout<<max(odd,max(zero,two))<<endl;
        
    }
    return 0;
}
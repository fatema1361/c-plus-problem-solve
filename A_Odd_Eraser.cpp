#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     while(b!=0){
//         int r=a%b;
//         a=b;
//         b=r;
//     }
//     return a;
// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<gcd(a[0],a[n-1])<<endl;
        // int mn=*min_element(a,a+n);
        // int gcd=1;
        // for(int i=1;i<=mn;i++){
        //     bool ok=true;
        //     for(int j=0;j<n;j++){
        //         if(a[j]%i!=0){
        //             ok=false;
        //             break;
        //         }
        //     }
        //     if(ok){
        //     gcd=i;
        //    }
        // }
        // cout<<gcd<<endl;
        
    }
    return 0;
}

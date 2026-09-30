#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long ans1=abs(a-b);
        long long ans2=abs(a-b+c);
        cout<<max(ans1,ans2)<<endl;
        
    }
    return 0;


}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//         long long a,b,c;
//         cin>>a>>b>>c;
//         long long ans=abs(a-b);
//         cout<<max(ans,ans+c)<<endl;
//         // if(ans<c){
//         //     cout<<c-ans<<endl;
//         // }
//         // else{
//         //     cout<<ans<<endl;
//         // }
//         // int mx=max(a,max(b,c));
//         // int mn=min(a,min(b,c));
//         // long long sum=mx+mn;
//         // if(a!=mx&&a!=mn){
//         //     cout<<sum-a<<endl;
//         // }
//         // else if(b!=mx&&b!=mn){
//         //     cout<<sum-b<<endl;
//         // }
//         // else if(c!=mx&&c!=mn){
//         //     cout<<sum-c<<endl;
//         // }

//     }
//     return 0;
// }
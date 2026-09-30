// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,x;
//     cin>>n>>x;
//     vector<long long>a(n);
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     map<long long,int>mp;
//     long long sum=0,cnt=0;
//     mp[0]=1;
//     for(int i=0;i<n;i++){
//         sum+=a[i];

//         if(mp.find(sum-x)!=mp.end()){
//             cnt+=mp[sum-x];
//         }
//         mp[sum]++;
//     }
    
//     cout<<cnt<<endl;
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    long long x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int l=0,cnt=0;
    long long sum=0;
    for(int r=0;r<n;r++){
        sum+=a[r];
        while(sum>x){
            sum-=a[l];
            l++;

        }
        if(sum==x){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}




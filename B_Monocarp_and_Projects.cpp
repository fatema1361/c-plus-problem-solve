#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        long long x,y,day;
        long long k,sum=0;
        cin>>x>>y>>k;
        day=y-x;
        while(k>0&&x<=day){
           sum+=day%x;
           k--;
           x++;
           
        }
        sum+=k*day;
        cout<<sum<<endl;

    }
    return 0;
}
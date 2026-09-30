#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int cnt=0;
        int l=0,r=n-1;
        while(l<r){
            if(s[l]==s[r]){
                
            }
            else if(s[l]==c||s[r]==c){
                cnt++;
            }
            else{
                cnt+=2;
            }
            l++;
            r--;
        }
        cout<<cnt<<endl;

       
    }
    return 0;
}

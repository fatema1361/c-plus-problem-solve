#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int k,n;
        cin>>n>>k;
        string s;
        cin>>s;
        int freq[26]={0};
        for(char c:s){
            freq[c-'a']++;


        }
        int odd=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2!=0){
                odd++;
            }
        }
        while(k>0 && odd>1){
            odd--;
            k--;
        }
        if(odd-1<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        int freq[26]={0};
        int len=S.size();
        for(int i=0;i<len;i++){
            freq[S[i]-'a']++;

        }
        int odd=0;
        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                odd++;
            }
        }
        if(odd==0){
            cout<<0<<endl;
        }
        else{
            cout<<odd-1<<endl;
        }
    }
    cout<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
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
        int m;
        cin>>m;
        while(m--){
            string s;
            cin>>s;
            if(s.length()!=n){
                cout<<"NO"<<endl;
                continue;
            }
            map<int,char>numToChar;
            map<char,int>charToNum;
            bool ok=true;
            for(int i=0;i<n;i++){
                if(numToChar.count(a[i])){
                    if(numToChar[a[i]]!=s[i]){
                        ok=false;
                        break;
                    }
                }

                if(charToNum.count(s[i])){
                    if(charToNum[s[i]]!=a[i]){
                        ok=false;
                        break;
                    }
                }
                numToChar[a[i]]=s[i];
                charToNum[s[i]]=a[i];
            }
            if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
            

        }
    }
    return 0;
}
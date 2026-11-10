#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='4'||s[i]=='7'){
            cnt++;
        }
        if(cnt==0){
            cout<<"NO"<<endl;
            return 0;
        }
        while(cnt>0){
            int digit=cnt%10;
            if(digit!=4&&digit!=7){
                cout<<"NO"<<endl;
                return 0;
            }
            cnt/=10;
        }
        cout<<"YES"<<endl;
    }

    return 0;
}

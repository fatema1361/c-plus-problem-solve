#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string s;
        cin>>s;
        int x=0,y=0;
        for(char c:s){
            if(c=='U')y++;
            else if(c=='D')y--;
            else if(c=='L')x--;
            else if(c=='R')x++;
            

        }
        if(abs(x)==2&&y==0||abs(y)==2&&x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
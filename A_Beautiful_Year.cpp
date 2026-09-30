#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y;
    cin>>y;
    while(true){
        y++;
        set<int>st;
        int x=y;
        while(x>0){
            int digit=x%10;
            st.insert(digit);
            x/=10;
        }
        if(st.size()==4){
            cout<<y<<endl;
            break;
        }
    }
    return 0;
}
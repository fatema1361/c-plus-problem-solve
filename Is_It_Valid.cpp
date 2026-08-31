#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string S;
        cin>>S;
        stack<char>st;
        for(char c:S){
                if(!st.empty()&&st.top()!=c){
                    st.pop();
                }
                else{
                    st.push(c);
                }
            
        }
        if(st.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string ans;
        vector<int>lower,upper;
        
        for(char c:s){
            if(c=='b'){
                if(!lower.empty()){
                    ans[lower.back()]='#';
                    lower.pop_back();
                }
            }
            else if(c=='B'){
                if(!upper.empty()){
                    ans[upper.back()]='#';
                    upper.pop_back();
                }
            }
            else{
                ans+=c;
                int pos=ans.size()-1;
                if(islower(c)){
                    lower.push_back(pos);
                }
                else{
                    upper.push_back(pos);
                }
            }
            
        }

        for(char c:ans){
            if(c!='#')
            cout<<c;
        }
        cout<<endl;
        
        
    }
    return 0;
}
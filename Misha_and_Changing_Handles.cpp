#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin>>q; 
    
        map<string,string>mp,has;
        for(int i=1;i<=q;i++){
            string a,b;
            cin>>a>>b;
            if(has.find(a)!=has.end()){
                string s=has[a];
                mp[s]=b;
                has.erase(a);
                has[b]=s;
            }
            else{
                mp[a]=b;
                has[b]=a;
            }
        }
        cout<<mp.size()<<endl;
        for(auto [x,y]:mp){
            cout<<x<<" "<<y<<endl;
        

    }
    return 0;
}
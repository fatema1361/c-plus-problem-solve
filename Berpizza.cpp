#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,customerNo=1;
    cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>ans;
    for(int i=1;i<=n;i++){
        int type;
        cin>>type;
        if(type==1){
            int money;
            cin>>money;
            s.insert({customerNo,money});
            ms.insert({money,-customerNo});
            customerNo++;
        }
        else if(type==2){
            int pos=s.begin()->first,money=s.begin()->second;
            ans.push_back(pos);
            s.erase(s.begin());
            ms.erase({money,-pos});
        }
        else{
            int pos=-ms.rbegin()->second,money=ms.rbegin()->first;
            ans.push_back(pos);
            ms.erase(--ms.end());
            s.erase({pos,money});
        }
       
        
    }
     for(auto value:ans){
            cout<<value<<" ";
        }
        cout<<endl;
       
    return 0;
}
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
        multiset<int>ms;
        for(int i=1;i<=n;i++){
            ms.insert(i);
        }
        vector<pair<int,int>>ans;
        while(ms.size()>1){
            auto it1=prev(ms.end());
            int a=*it1;
            ms.erase(it1);

            auto it2=prev(ms.end());
            int b=*it2;
            ms.erase(it2);

            int c=(a+b+1)/2;
            ans.push_back({a,b});
            ms.insert(c);

        }
        cout<<*ms.begin()<<endl;
        for(auto [a,b]:ans){
            cout<<a<<" "<<b<<endl;
        }

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,size;
    cin>>n;
    list<string>li;
    set<string>name;
    while(n--){
        string s;
        cin>>s;
        if(name.find(s)!=name.end()){
            li.remove(s);
        }
    li.push_front(s);
    name.insert(s);
        
    }
    for(string si:li){
          cout<<si<<endl;
       } 
      
        
    return 0;
}
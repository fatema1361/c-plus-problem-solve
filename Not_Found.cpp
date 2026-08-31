#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin>>S;
    bool present[26]={false};
    for(char c:S){
        present[c-'a']=true;

    }
    for(char c='a';c<='z';c++){
        if(!present[c-'a']){
            cout<<c<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}
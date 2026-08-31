#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int bob=s.find('0');
        s.erase(bob,1);

        int alice=s.find('1');
        s.erase(alice,1);
        
        cout<<s<<endl;
    }

    return 0;
}
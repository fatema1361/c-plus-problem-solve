
#include<bits/stdc++.h>
using namespace std;
int main(){
    string S;
    while(getline(cin,S)){
        string temp="";
        for(char c:S){
            if(c!=' '){
                temp.push_back(c);
            }
        }
        sort(temp.begin(),temp.end());
        cout<<temp<<endl;
    }
    return 0;
}
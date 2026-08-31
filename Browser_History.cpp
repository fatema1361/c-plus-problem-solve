#include<bits/stdc++.h>
using namespace std;
int main(){
    list<string>sm;
    string s;
    while(cin>>s && s!="end"){
        sm.push_back(s);
    }
    auto curr=sm.begin();
    int Q;
    cin>>Q;
    while(Q--){
        string cmd;
        cin>>cmd;
        if(cmd=="visit"){
            string address;
            cin>>address;
            bool found=false;
            for(auto it=sm.begin();it!=sm.end();it++){
                if(*it==address){
                    curr=it;
                    cout<<*curr<<endl;
                    found=true;
                    break;
                }
            }
            if(!found){
                cout<<"Not Available"<<endl;
            }
        }    
        else if(cmd=="next"){
                auto temp=curr;
                temp++;
                
                if(temp!=sm.end()){
                    curr++;
                    cout<<*curr<<endl;
                }
                else{
                    cout<<"Not Available"<<endl;
                }
        }
        else if(cmd=="prev"){
                if(curr!=sm.begin()){
                    curr--;
                    cout<<*curr<<endl;
                }
                else{
                    cout<<"Not Available"<<endl;
                }
        }
        

    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int Q;
    cin>>Q;
    queue<int >q;
    while(Q--){
        int type;
        cin>>type;
        if(type==1){
            int X;
            cin>>X;
            q.push(X);
        }
        else if(type==2){
            if(q.empty()){
                cout<<-1<<endl;
            }
            else{
                cout<<q.front()<<endl;
                q.pop();
            }
        }
    }
    return 0;
}
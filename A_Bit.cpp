#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,cnt=0;
    cin>>n;
    string X;
    
    for(int i=0;i<n;i++){
        cin>>X;
        if(X=="X++"||X=="++X"){
            cnt++;

        }
        else if(X=="--X"||X=="X--"){
            cnt--;
        }
    }
    cout<<cnt<<endl;

    return 0;
}
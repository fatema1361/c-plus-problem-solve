#include<bits/stdc++.h>
using namespace std;
int main(){
    int L,R,e=0;
    cin>>L>>R;
    for(int i=L;i<R;i++){
        if(i%2==0){
            e=1;
        }
    }
    if(e){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}
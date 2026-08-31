#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int X,Y,Z;
        cin>>X>>Y>>Z;
        if(Y>=Z){
            cout<<"-1"<<endl;
            continue;
        }
        int p=X;
        int c=0;
        int m=0;
        while(c<p){
            m++;
            p=p+Y;
            c=c+Z;
        }
        cout<<m<<endl;

        
    }
    return 0;
}
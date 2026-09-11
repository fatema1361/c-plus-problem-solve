#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        string A,B;
        int ca=0,cb=0,ca1=0,cb1=0;
        for(int i=0;i<N;i++){
            if(A[i]=='a'){
                ca++;
            }
            else if(A[i]=='b'){
                cb++;
            }
        }
        for(int i=0;i<N;i++){
            if(B[i]=='a'){
                ca1++;
            }
            else if(B[i]=='b'){
                cb1++;
            }
        }
        if(ca==cb1||ca1==cb){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

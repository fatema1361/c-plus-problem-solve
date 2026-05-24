#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++){
            cin>>A[i];

        }
        int mn=*min_element(A,A+N);
        int count=0;
        for(int i=0;i<N;i++){
            if(A[i]!=mn){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}